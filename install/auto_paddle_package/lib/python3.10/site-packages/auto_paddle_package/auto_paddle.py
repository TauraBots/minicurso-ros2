import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16



class AutoPaddle(Node):
    def __init__(self):
        super().__init__('paddle_controller')
        
        self.controller = self.create_publisher(Int16, 'red_paddle_control', 10)
        self.ball_subscriber = self.create_subscription(
            Int16,
            'ball_position',
            self.ball_position_callback,
            10)
        
        self.y_position = 300
        self.ball_y_position = 300  # Posição inicial da bola no eixo Y
        

    def ball_position_callback(self, msg):
        self.ball_y_position = msg.data
        self.get_logger().info(f"Y_ball {msg.data}")
        self.update_position()

    def update_position(self):
        if self.ball_y_position > self.y_position + 10:
            self.y_position += 10
        elif self.ball_y_position < self.y_position - 10:
            self.y_position -= 10

        msg = Int16()
        msg.data = self.y_position
        self.controller.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = AutoPaddle()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
