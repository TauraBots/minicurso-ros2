from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="paddle_controller_package",
                executable="keyboard_controller",
                name="keyboard",
                output="screen",
            ),
            Node(
                package="auto_paddle_package",
                executable="auto_paddle",
                name="auto_paddle",
                output="screen",
            ),
            Node(
                package="simulator_package",
                executable="gui",
                name="gui",
                output="screen",
            ),
            Node(
                package="simulator_package",
                executable="simulator",
                name="simulator",
                output="screen",
            ),
            # Adicione outros nós conforme necessário
        ]
    )
