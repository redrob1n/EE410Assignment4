
void forwardRunAway()
{
    digitalWrite(leftDir_Pin,HIGH);
    digitalWrite(rightDir_Pin,HIGH);
    
    setMotorSpeeds(30);
    writeMotorSpeeds();

    delay(1000);

    //makes it stop
    motor_stop();
}

void forwardCollide()
{



}