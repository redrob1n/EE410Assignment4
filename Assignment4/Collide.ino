/*
Sonar reads found in ping() are now compared to check 
for collisions.
If the front sensors detect an object, it will stop 
the motors.

*/
uint8_t checkForForwardCollisions()
{
    if(sonarRead[0] <= 20 || sonarRead[1] <= 20 || sonarRead[7]  <= 20)
    {       
        beep();
        return 1;
    }
    return 0;
}

