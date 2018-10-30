 
/*
//returning theta
runaway grabs the value from feelForce vectorAngle
to determine right or left turn spin.

*/

float runAway()
{
    int i;
    
    float newCount=14.16*vectorAngle;
    setMotorSpeeds(25);
    writeMotorSpeeds();
    if(vectorAngle < 0)
    {
        newCount = abs(newCount);
        rightTurnSpin(newCount);
    }
    else
    {
        leftTurnSpin(newCount);
    }

    for(i=0; i<force/10 || i<5; i++)
    {
        ping();
        if(checkForForwardCollisions())
        {
            motor_stop();
            break;
        }
    }

    motor_stop();
}    
