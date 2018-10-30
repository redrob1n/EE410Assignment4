
void forwardRunAway()
{
    digitalWrite(leftDir_Pin,HIGH);
    digitalWrite(rightDir_Pin,HIGH);
<<<<<<< HEAD
        
    analogWrite(leftPWM_Pin,30);
    analogWrite(rightPWM_pin,30);
=======
    
    setMotorSpeeds(30);
    writeMotorSpeeds();
>>>>>>> d2b98aa6fc5c6f733f7bd897199cc817f4e42f1a

    delay(1000);

    //makes it stop
    motor_stop();
}

void forwardCollide()
{



}