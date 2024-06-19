import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16


class AutoPad(Node):
    def __init__(self):
        super().__init__("auto_pad")
        self.ball_subscriber = self.create_subscription(
            Int16, "ball_position", self.ball_callback, 10
        )
        self.red_controller_publisher = self.create_publisher(Int16, "red_control", 10)

        self.get_logger().info("AutoPad inicializado!!")
        self.y_position = 300
        self.y_ball_position = 0

    def ball_callback(self, msg):
        self.y_ball_position = msg.data
        self.update_position()

    def update_position(self):
        if self.y_ball_position > self.y_position:
            self.y_position += 15
        elif self.y_ball_position < self.y_position:
            self.y_position -= 15

        msg = Int16()
        msg.data = self.y_position
        self.red_controller_publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = AutoPad()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
