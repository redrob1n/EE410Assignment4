//returning theta 


float runAway(float feelForce)
{

    //5.576*2.54
    float newCount=14.16*vectorAngle;

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