
void forwardRunAway()
{
    digitalWrite(leftDir_Pin,HIGH);
    digitalWrite(rightDir_Pin,HIGH);

    analogWrite(leftPWM_Pin,leftDutyCycle);
    analogWrite(rightPWM_pin,rightDutyCycle);

    delay(1000);

//makes it stop
    analogWrite(leftPWM_Pin,0);
    analogWrite(rightPWM_Pin,0)
}

void forwardCollide()
{

    digitalWrite(leftDir_Pin,HIGH);
    digitalWrite(rightDir_Pin,HIGH);

    analogWrite(leftPWM_Pin,leftDutyCycle);
    analogWrite(rightPWM_pin,rightDutyCycle);

    while(1)
    {
        
    }

}