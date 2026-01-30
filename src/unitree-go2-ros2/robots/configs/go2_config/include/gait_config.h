#ifndef GAIT_CONFIG_H
#define GAIT_CONFIG_H

#define KNEE_ORIENTATION        ">>"
#define ODOM_SCALER             1.25
#define PANTOGRAPH_LEG          false
#define MAX_LINEAR_VELOCITY_X   0.2
#define MAX_LINEAR_VELOCITY_Y   0.15
#define MAX_ANGULAR_VELOCITY_Z  0.5
#define COM_X_TRANSLATION       0.0
#define SWING_HEIGHT            0.03
#define STANCE_DEPTH            0.00
#define STANCE_DURATION         0.1
#define NOMINAL_HEIGHT          0.2

#endif
/**:
  ros__parameters:
    gait:
      knee_orientation : ">>"
      pantograph_leg : false
      odom_scaler: 0.9
      max_linear_velocity_x : 0.2
      max_linear_velocity_y : 0.15
      max_angular_velocity_z : 0.5
      com_x_translation: 0.0
      swing_height : 0.03
      stance_depth : 0.0
      stance_duration : 0.1
      nominal_height : 0.1
**/