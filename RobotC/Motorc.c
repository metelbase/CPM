#pragma config(Sensor, S1,     ,               sensorEV3_Color, modeEV3Color_Color)
#pragma config(Motor,  motorA,           ,             tmotorEV3_Large, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	resetMotorEncoder(motorA);
	while(1){
		int e = getMotorEncoder(motorA);
		setMotorBrakeMode(motorA, motorCoast);
		int q = (e % 360) / 36;
		if(q < 0){q=abs(q)-10;}
		displayTextLine(7, "%d", abs(q));

	}


}
