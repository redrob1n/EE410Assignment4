/*
Wander module passes a value to avoid function which is an
angle in radians.
Then we use counts to determine how far it needs to be traveled
for a certain angle

*/
void avoid(float WanderAngle, float FeelAngle)
{
  float avoidAngle = (WanderAngle + FeelAngle)/2;

  float newCount=14.16*avoidAngle;
    setMotorSpeeds(25);
    writeMotorSpeeds();
    if(avoidAngle < 0)
    {
      //It will turn right for an angle less than 0
        newCount = abs(newCount);
        rightTurnSpin(newCount);
    }
    else
    {
        leftTurnSpin(newCount);
    }

        for(float i=0;i<force/10 || i<5;i++)
    {        
        ping();
        Serial.print("Force: ");
        Serial.println(force);
        Serial.print("i: ");
        Serial.println(i);
        if(checkForForwardCollisions())
        {
            avoidCollision();
            break;
        }
    }

    motor_stop();
    delay(4000);
}

/* This avoids collision using the leftTurnSpin function.
//If the object is close using the "checkForForwardCollisions"
which uses sonar reads to use this function. 
*/
void avoidCollision()
{
  int j;
  motor_stop();
  digitalWrite(leftDir_Pin, LOW);
  digitalWrite(rightDir_Pin, LOW);

  setMotorSpeeds(25);
  writeMotorSpeeds();

  for(j=0;j<2;j++)
  {
    ping();
  }

  //motor_stop();

  leftTurnSpin(2548);

}