
void forwardRunAway()
{
    digitalWrite(leftDir_Pin,HIGH);
    digitalWrite(rightDir_Pin,HIGH);
    
    analogWrite(leftPWM_Pin,30);
    analogWrite(rightPWM_pin,30);

    delay(1000);

//makes it stop
    analogWrite(leftPWM_Pin,0);
    analogWrite(rightPWM_Pin,0)
}

void forwardCollide()
{



}