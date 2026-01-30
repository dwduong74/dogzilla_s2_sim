
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    # Path to the EKF config file
    ekf_config_path = os.path.join(
        get_package_share_directory('gemini_examples'),
        'config',
        'ekf.yaml'
    )

    # Include the launch file for the IMU publisher
    imu_publisher_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('yahboom_dog_joint_state'),
                'yahboom_dog_joint_state.launch.py'
            )
        )
    )

    # Start the robot_localization EKF node
    ekf_node = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[ekf_config_path],
        remappings=[('odometry/filtered', 'odom')]
    )

    return LaunchDescription([
        imu_publisher_launch,
        ekf_node,
    ])
