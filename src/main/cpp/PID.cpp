#include <PID.h>

void PID::PID_drivebase30 (){
	//Practice

	/*talon_right_enc->Config_kP(4,0,10);
	talon_right_enc->Config_kI(0,0,10);
	talon_right_enc->Config_kD(0,0,10);
	talon_right_enc->Config_kF(1.65 ,0,10);
	talon_left_enc->Config_kP(4,0,10);
	talon_left_enc->Config_kI(0,0,10);
	talon_left_enc->Config_kD(0,0,10);
	talon_left_enc->Config_kF(1.6 ,0,10);*/

	//Comp

	talon_right_enc->Config_kP(0,4,10);
	talon_right_enc->Config_kI(0,0,10);
	talon_right_enc->Config_kD(0,0,10);
	talon_right_enc->Config_kF(0,1.6,10);
	talon_left_enc->Config_kP(,4,10);
	talon_left_enc->Config_kI(0,0,10);
	talon_left_enc->Config_kD(0,0,10);
	talon_left_enc->Config_kF(0,1.6,10);
}

//Configs drivebase 10% of velocity
void PID::PID_drivebase10(){
	talon_right_enc->Config_kP(3,0,10);
	talon_right_enc->Config_kI(0,0,10);
	talon_right_enc->Config_kD(0,0,10);
	talon_right_enc->Config_kF(1.9,0,10);
	talon_left_enc->Config_kP(3,0,10);
	talon_left_enc->Config_kI(0,0,10);
	talon_left_enc->Config_kD(0,0,10);
	talon_left_enc->Config_kF(1.85,0,10);
}

void PID::PID_claw_elevator(){
	claw_pivot_talon_enc->Config_kP(7,0,10);
	claw_pivot_talon_enc->Config_kI(0,0,10);
	claw_pivot_talon_enc->Config_kD(0,0,10);
	claw_pivot_talon_enc->Config_kF(0,0,10);
	std::cout<<"PID set"<<std::endl;
	talon_elevator_enc->Config_kP(10,0,10);
	talon_elevator_enc->Config_kI(0,0,10);
	talon_elevator_enc->Config_kD(0,0,10);
	talon_elevator_enc->Config_kF(0,0,10);
}