


uint8_t checkForForwardCollisions()
{
    if(sonarRead[0] <= 20 || sonarRead[1] <= 20 || sonarRead[2]  <= 20)
    {
        return 1;
    }
    return 0;
}

