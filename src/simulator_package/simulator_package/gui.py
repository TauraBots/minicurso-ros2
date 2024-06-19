import rclpy
from rclpy.node import Node
from interfaces_package.srv import SimControl
import pygame


class Gui(Node):
    def __init__(self):
        super().__init__("gui")
        self.client_gui = self.create_client(SimControl, "sim_control")

    def init_pygame(self):
        pygame.init()
        self.width, self.height = 400, 100
        self.window = pygame.display.set_mode((self.width, self.height))
        pygame.display.set_caption("Game Control")
        self.font = pygame.font.Font(None, 36)

        self.buttons = {
            "Start": pygame.Rect(10, 10, 90, 40),
            "Pause": pygame.Rect(110, 10, 90, 40),
            "Play": pygame.Rect(210, 10, 90, 40),
            "End": pygame.Rect(310, 10, 90, 40),
        }

    def set_action(self, action):
        self.req = SimControl.Request()
        self.req.action = action
        self.future = self.client_gui.call_async(self.req)

    def draw_buttons(self):
        self.window.fill((30, 30, 30))
        for text, rect in self.buttons.items():
            pygame.draw.rect(self.window, (70, 70, 70), rect)
            label = self.font.render(text, True, (255, 255, 255))
            self.window.blit(label, (rect.x + 10, rect.y + 5))

    def run(self):
        running = True
        while running:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    running = False
                elif event.type == pygame.MOUSEBUTTONDOWN:
                    for text, rect in self.buttons.items():
                        if rect.collidepoint(event.pos):
                            self.get_logger().info(f"{text} button clicked")
                            self.set_action(text.lower())

            self.draw_buttons()
            pygame.display.flip()

        pygame.quit()


def main(args=None):
    rclpy.init(args=args)
    node = Gui()
    node.init_pygame()
    node.run()
    node.destroy_node()
    rclpy.shutdown()
