/*
*   File: motor.ino
This file includes the motor speed, control and pins.
*/

void motor_init()
{
    attachInterrupt(1, LtEncoderRead, RISING); //pin 3
    attachInterrupt(0, RtEncoderRead, RISING); //pin 2

    //setup motor control pins
    pinMode(leftDir_Pin, OUTPUT);
    pinMode(leftPWM_Pin, OUTPUT);
    pinMode(rightDir_Pin, OUTPUT);
    pinMode(rightPWM_Pin, OUTPUT);

    //initialize motor speeds to equal values
    leftDutyCyclePercent = 25;
    rightDutyCyclePercent = 25;
    leftDutyCycle = leftDutyCyclePercent * 255 / 100;
    rightDutyCycle = rightDutyCyclePercent * 255 / 100;

    //set motor direction forward
    digitalWrite(leftDir_Pin, HIGH);
    digitalWrite(rightDir_Pin, HIGH);

    // turn on motors
    motor_stop();

    LtCount = 0;
    RtCount = 0;
}
//left encoder
void LtEncoderRead()
{
    LtCount += 1;
}
//right encoder
void RtEncoderRead()
{
    RtCount += 1;
}
//sets dutycycle according to a duty cycle percentage.
void setMotorSpeeds(int dutyCyclePercent)
{
    leftDutyCycle = dutyCyclePercent * 255 / 100;
    rightDutyCycle = dutyCyclePercent * 255 / 100;
}
//writes to the motors, will output speed of the rotation
void writeMotorSpeeds()
{
    analogWrite(leftPWM_Pin, leftDutyCycle);
    analogWrite(rightPWM_Pin, rightDutyCycle);
}
//stops the motor
void motor_stop()
{
    setMotorSpeeds(0);
    writeMotorSpeeds();
}
