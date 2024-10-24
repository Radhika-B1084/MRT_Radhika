# aruco_detector/aruco_service.py

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Polygon, Point32
from aruco_interfaces.srv import ArucoDetect
from sensor_msgs.msg import Image
import cv2
import numpy as np
from cv_bridge import CvBridge


class ArucoService(Node):
    def __init__(self):
        super().__init__('aruco_service')
        self.srv = self.create_service(ArucoDetect, 'detect_aruco_markers', self.detect_aruco_callback)
        self.bridge = CvBridge()  # For converting ROS Image messages to OpenCV format
        self.aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_6X6_250)
        self.Parameters = cv2.aruco.DetectorParameters()
        self.arucodetector = cv2.aruco.ArucoDetector(self.aruco_dict, self.Parameters
                                                 )
    def detect_aruco_callback(self, request, response):
        # Convert the ROS Image message to OpenCV format
        cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding='bgr8')
        self.get_logger().info("Recieved service request")
        # Convert to grayscale for ArUco detection
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        corners, ids, _ = self.arucodetector.detectMarkers(gray)

        if ids is not None:  
            ids = [int(id[0]) for id in ids] 

            polygons = []

            for arr in corners:
                polygon = Polygon()
                A = arr[0]
                for corner in A:
                    print(corner, corner[0], corner[1])
                    pt = Point32
                    pt.x, pt.y = float (corner[0]), float(corner[1])
                    polygon.points.append(pt)
                polygons.append(polygon)
            response.ids = ids
        else:
            response.ids.points.append(ids)
            response.corners.points.append(corners)

        return response


def main(args=None):
    rclpy.init(args=args)
    node = ArucoService()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
