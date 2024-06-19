import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
import pygame
import sys

class PaddleController(Node):
    def __init__(self):
        super().__init__('paddle')
        
        self.timer = self.create_timer(0.01, self.update_position)
        self.controller = self.create_publisher(Int16, 'blue_paddle_control', 10)
        self.y_position = 300

        pygame.init()
        self.screen = pygame.display.set_mode((200, 200))  
        pygame.display.set_caption("Paddle Controller")

    def update_position(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
        
        keys = pygame.key.get_pressed()
        if keys[pygame.K_w] and self.y_position > 0:
            self.y_position -= 5
        elif keys[pygame.K_s] and self.y_position < 500:
            self.y_position += 5

        msg = Int16()
        msg.data = self.y_position
        self.controller.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = PaddleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
  
if __name__ == "__main__":
    main()
