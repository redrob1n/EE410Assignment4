void avoid(float WanderAngle, float FeelAngle)
{
  float avoidAngle = (WanderAngle + FeelAngle)/2;
  
  float newCount=14.16*avoidAngle;
    setMotorSpeeds(25);
    writeMotorSpeeds();
    if(avoidAngle<0)
    {
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
        Serial.println("Harry's a bitch");
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
}

void avoidCollision()
{
  motor_stop();
  digitalWrite(leftDir_Pin, LOW);
  digitalWrite(rightDir_Pin, LOW);

  setMotorSpeeds(25);
  writeMotorSpeeds();

  for(j=0;j<5;j++)
  {
    
  }
}