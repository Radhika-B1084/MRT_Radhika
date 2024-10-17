from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sauron',
            executable='publisher1',
            output = 'screen',
        ),
        Node(
            package='sauron',
            executable= 'publisher2',
            output = 'screen',
        ),
        Node(
            package='sauron',
            executable='subscriber',
            output = 'screen',
        ),
    ])