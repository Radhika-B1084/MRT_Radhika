import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from aruco_interfaces.srv import GetArucoResponse
import cv2.aruco as aruco

class ArUcoDetector(Node):
    def __init__(self):
        super().__init__('aruco_server')
        self.srv = self.create_service(GetArucoResponse,'detect_aruco', self.detect_aruco_callback)
        self.bridge = CvBridge()
        self.aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_6X6_250)
        self.Parameters = cv2.aruco.DetectorParameters()
        self.arucodetector = cv2.aruco.ArucoDetector(self.aruco_dict, self.Parameters)

    def detect_aruco_callback(self, request, response):
        # Convert ROS Image message to OpenCV image
        frame = self.bridge.imgmsg_to_cv2(request.image, desired_encoding="bgr8")

        # Detect ArUco markers
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        corners, ids, _ = self.arucodetector.detectMarkers(gray)

        # Prepare response
        if ids is not None:
            for i, corner in enumerate(corners):
                # Extract the bounding box
                bounding_box = [list(point) for point in corner[0]]
                response.ids.append(ids[i])
                response.corners[i].points.append(bounding_box)

        return response


def main(args=None):
    rclpy.init(args=args)
    aruco_detector = ArUcoDetector()
    rclpy.spin(aruco_detector)
    aruco_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
