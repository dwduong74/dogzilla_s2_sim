import os

import launch_ros
from launch_ros.actions import Node
from launch.conditions import IfCondition, UnlessCondition
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration


def generate_launch_description():

    use_sim_time = LaunchConfiguration("use_sim_time")
    description_path = LaunchConfiguration("description_path")
    rviz_config_path = LaunchConfiguration("rviz_config_path")
    use_joint_state_publisher = LaunchConfiguration("use_joint_state_publisher")
    use_rviz = LaunchConfiguration("use_rviz")
    use_gui = LaunchConfiguration("use_gui")

    # Find the package share directory
    pkg_share = launch_ros.substitutions.FindPackageShare(package="dogzilla_description").find("dogzilla_description")
    
    # Define default paths
    default_model_path = os.path.join(pkg_share, "xacro/robot.xacro")
    default_rviz_config_path = os.path.join(pkg_share, "rviz/dogzilla.rviz")

    # Declare launch arguments
    declare_use_sim_time = DeclareLaunchArgument("use_sim_time", default_value="false", description="Use simulation (Gazebo) clock if true")
    declare_description_path = DeclareLaunchArgument(name="description_path", default_value=default_model_path, description="Absolute path to robot urdf file")
    declare_rviz_config_path = DeclareLaunchArgument(name="rviz_config_path", default_value=default_rviz_config_path, description="Absolute path to rviz config file")
    declare_use_joint_state_publisher = DeclareLaunchArgument("use_joint_state_publisher", default_value="true", description="Whether to start joint state publisher")
    declare_use_rviz = DeclareLaunchArgument("use_rviz", default_value="true", description="Whether to start rviz")
    declare_use_gui = DeclareLaunchArgument("use_gui", default_value="false", description="Whether to start joint state publisher gui")


    # Robot State Publisher Node
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[
            {"robot_description": Command(["xacro ", description_path])},
            {'use_sim_time': use_sim_time}
        ],
    )

    # Joint State Publisher Node
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        condition=IfCondition(use_joint_state_publisher) and UnlessCondition(use_gui),
        parameters=[{'use_sim_time': use_sim_time}],
    )

    # Joint State Publisher GUI Node
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        condition=IfCondition(use_joint_state_publisher) and IfCondition(use_gui),
        parameters=[{'use_sim_time': use_sim_time}],
    )

    # RViz Node
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", rviz_config_path],
        condition=IfCondition(use_rviz),
        parameters=[{'use_sim_time': use_sim_time}],
    )

    return LaunchDescription(
        [
            declare_description_path,
            declare_use_sim_time,
            declare_rviz_config_path,
            declare_use_joint_state_publisher,
            declare_use_rviz,
            declare_use_gui,
            
            robot_state_publisher_node,
            joint_state_publisher_node,
            joint_state_publisher_gui_node,
            rviz_node,
        ]
    )
