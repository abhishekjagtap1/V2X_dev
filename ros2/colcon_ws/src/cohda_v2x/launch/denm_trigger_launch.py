import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('trigger', default_value='10', description='Trigger variable for DENM'),
        Node(
            package='cohda_v2x',
            executable='denm_send_node',  # Replace with the name of your executable
            name='denm_send_node',
            output='screen',
            parameters=[{'trigger': LaunchConfiguration('trigger')}],
        ),
    ])
