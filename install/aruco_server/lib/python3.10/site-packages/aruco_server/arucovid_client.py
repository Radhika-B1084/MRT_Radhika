import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from aruco_interfaces.srv import GetArucoResponse
import cv2

class ImageClient(Node):
    def __init__(self):
        super().__init__('image_client')
        self.client = self.create_client(GetArucoResponse,'detect_aruco')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for server to be available...')
        
        self.bridge = CvBridge()

    def send_image_request(self, img):
        request = GetArucoResponse.Request()
        request.image = self.bridge.cv2_to_imgmsg(img, encoding="bgr8")
        self.future = self.client.call_async(request)

    def run(self):
        cap = cv2.VideoCapture(0)
        if not cap.isOpened():
            self.get_logger().error('Error opening webcam')
            return

        while rclpy.ok():
            ret, frame = cap.read()
            if not ret:
                self.get_logger().error('Failed to capture image')
                break

            # Send the captured image to the server
            self.send_image_request(frame)
            rclpy.spin_once(self)

            if self.future.done():
                try:
                    response = self.future.result()
                    self.get_logger().info(f"Received ArUco info: {response}")
                except Exception as e:
                    self.get_logger().error(f"Service call failed {str(e)}")

            # Show the frame
            cv2.imshow('Webcam', frame)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()


def main(args=None):
    rclpy.init(args=args)
    image_client = ImageClient()
    image_client.run()
    image_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
