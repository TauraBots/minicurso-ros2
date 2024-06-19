import rclpy
from rclpy.node import Node
import pygame
import sys
from std_msgs.msg import Int16


class PongSimulator(Node):
    def __init__(self):
        super().__init__("pong_simulator")
        self.init_pygame()
        self.create_timer(0.016, self.update)
        self.blue_subscriber = self.create_subscription(Int16, "blue_paddle_control", self.update_blue_position, 10) 
        self.red_subscriber = self.create_subscription(Int16, 'red_paddle_control', self.update_red_position, 10)
        self.ball_publisher = self.create_publisher(Int16, "ball_position", 10)

    def init_pygame(self):
        pygame.init()
        self.width, self.height = 800, 600
        self.window = pygame.display.set_mode((self.width, self.height))
        pygame.display.set_caption("Pong 2D")
        self.GREEN = (0, 128, 0)
        self.BLUE = (0, 0, 255)
        self.RED = (255, 0, 0)
        self.WHITE = (255, 255, 255)
        self.paddle_width, self.paddle_height = 20, 100
        self.blue_paddle_pos = [50, self.height // 2 - self.paddle_height // 2]
        self.red_paddle_pos = [
            self.width - 50 - self.paddle_width,
            self.height // 2 - self.paddle_height // 2,
        ]
        self.ball_pos = [self.width // 2, self.height // 2]
        self.ball_velocity = [5, 5]
        self.font = pygame.font.Font(None, 36)
        self.blue_score = 0
        self.red_score = 0


    def update_blue_position(self, msg):
        self.blue_paddle_pos[1] = msg.data
        self.get_logger().info(f"update_blue_position {self.blue_paddle_pos}")
    
    def update_red_position(self, msg):
        self.red_paddle_pos[1] = msg.data
        self.get_logger().info(f"update_red_position {self.red_paddle_pos}")
        
    def draw_elements(self):
        self.window.fill(self.GREEN)
        pygame.draw.rect(
            self.window,
            self.BLUE,
            (*self.blue_paddle_pos, self.paddle_width, self.paddle_height),
        )
        pygame.draw.rect(
            self.window,
            self.RED,
            (*self.red_paddle_pos, self.paddle_width, self.paddle_height),
        )
        pygame.draw.circle(self.window, self.WHITE, self.ball_pos, 10)
        score_text = self.font.render(
            f"{self.blue_score} - {self.red_score}", True, self.WHITE
        )
        self.window.blit(score_text, (self.width // 2 - 50, 20))
        # Desenho dos gols
        pygame.draw.line(self.window, self.WHITE, (0, 0), (0, self.height), 5)
        pygame.draw.line(
            self.window, self.WHITE, (self.width, 0), (self.width, self.height), 5
        )

    def update(self):
        self.update_ball_position()
        self.draw_elements()
        pygame.display.flip()
        
    def update_ball(self):
        msg = Int16()
        msg.data = self.ball_pos[1]
        self.ball_publisher.publish(msg)

    def update_ball_position(self):
        self.ball_pos[0] += self.ball_velocity[0]
        self.ball_pos[1] += self.ball_velocity[1]
        self.update_ball()

        # Colisão com o topo e o fundo
        if self.ball_pos[1] <= 10 or self.ball_pos[1] >= self.height - 10:
            self.ball_velocity[1] = -self.ball_velocity[1]

        # Colisão com os paddles
        if (
            self.ball_pos[0] <= self.blue_paddle_pos[0] + self.paddle_width
            and self.blue_paddle_pos[1]
            < self.ball_pos[1]
            < self.blue_paddle_pos[1] + self.paddle_height
        ):
            self.ball_velocity[0] = -self.ball_velocity[0]
        if (
            self.ball_pos[0] >= self.red_paddle_pos[0]
            and self.red_paddle_pos[1]
            < self.ball_pos[1]
            < self.red_paddle_pos[1] + self.paddle_height
        ):
            self.ball_velocity[0] = -self.ball_velocity[0]

        # Pontuação
        if self.ball_pos[0] <= 0:
            self.red_score += 1
            self.reset_ball()
        if self.ball_pos[0] >= self.width:
            self.blue_score += 1
            self.reset_ball()

    def reset_ball(self):
        self.ball_pos = [self.width // 2, self.height // 2]
        self.ball_velocity = [-self.ball_velocity[0], self.ball_velocity[1]]


def main(args=None):
    rclpy.init(args=args)
    node = PongSimulator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
