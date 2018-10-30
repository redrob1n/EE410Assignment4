 


float runAway()//float feelForce)
{
    //5.576 counts per degree
    float newCount=14.16*vectorAngle;
    if(vectorAngle<0)
    {
        newCount = abs(newCount);
        rightTurnSpin(newCount);
    }
    else
    {
        leftTurnSpin(newCount);
    }
    return 0;
}



    