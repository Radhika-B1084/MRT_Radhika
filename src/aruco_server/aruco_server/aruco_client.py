# aruco_detector/aruco_client.py

import sys
import rclpy
from rclpy.node import Node
from aruco_interfaces.srv import ArucoDetect
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge


class ArucoClient(Node):
    def __init__(self):
        super().__init__('aruco_client')
        self.cli = self.create_client(ArucoDetect, 'detect_aruco_markers')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.req = ArucoDetect.Request()
        self.bridge = CvBridge()

    def send_request(self, image):
        # Convert the OpenCV image to a ROS Image message
        self.req.image = self.bridge.cv2_to_imgmsg(image, encoding='bgr8')
        return self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    if len(sys.argv) != 2:
        print("Usage: aruco_client <image_file_path>")
        return

    image_file_path = sys.argv[1]
    aruco_client = ArucoClient()

    # Load the image
    image = cv2.imread(image_file_path)

    future = aruco_client.send_request(image)
    rclpy.spin_until_future_complete(aruco_client, future)

    if future.result() is not None:
        response = future.result()
        print(f"Detected ArUco Marker IDs: {response.ids}")
        print(f"Bounding Coordinates: {response.corners}")
    else:
        aruco_client.get_logger().info('Service call failed')

    aruco_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
