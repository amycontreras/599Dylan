#include "Macros.h"

void updateDriveMotors(int left,int right)
{
	motor[front_left_drive_motor] = left;
	motor[back_left_drive_motor] = left;
	motor[front_right_drive_motor] = right;
	motor[back_right_drive_motor] = right;
}


void ok()
{
	if(vexRT[Ch3] > 10)
	{
		motor[front_left_drive_motor] = 127;
		motor[back_left_drive_motor] = 127;
		motor[front_right_drive_motor] = 127;
		motor[back_right_drive_motor] = 127;
	}
	else if(vexRT[Ch3] < -10)
	{
		motor[front_left_drive_motor] = -127;
		motor[back_left_drive_motor] = -127;
		motor[front_right_drive_motor] = -127;
		motor[back_right_drive_motor] = -127;
	}
	else if(vexRT[Ch1] > 10)
	{
		motor[front_left_drive_motor] = 127;
		motor[back_left_drive_motor] = 127;
		motor[front_right_drive_motor] = -127;
		motor[back_right_drive_motor] = -127;
	}
	else if(vexRT[Ch1] < -10)
	{
		motor[front_left_drive_motor] = -127;
		motor[back_left_drive_motor] = -127;
		motor[front_right_drive_motor] = 127;
		motor[back_right_drive_motor] = 127;
	}
	else if(vexRT[Btn8L] == 1)
	{
		motor[front_left_drive_motor] = 127;
		motor[back_left_drive_motor] = -127;
		motor[front_right_drive_motor] = -127;
		motor[back_right_drive_motor] = 127;
	}
	else if(vexRT[Btn8R] == 1)
	{
		motor[front_left_drive_motor] = -127;
		motor[back_left_drive_motor] = 127;
		motor[front_right_drive_motor] = 127;
		motor[back_right_drive_motor] = -127;
	}
	else
	{
		motor[front_left_drive_motor] = 0;
		motor[back_left_drive_motor] = 0;
		motor[front_right_drive_motor] = 0;
		motor[back_right_drive_motor] = 0;
	}
}


void updateDrive()
{
	ok();
}
