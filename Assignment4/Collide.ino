


uint8_t checkForForwardCollisions()
{
    if(sonar_data.FrontRange <= 7 || sonar_data.Left45FrontRange <= 7 || sonar_data.Right45FrontRange <= 7)
    {
        return 1;
    }
    return 0;
}

uint8_t checkForRearCollisions()
{
    if(sonar_data.RearRange <= 7 || sonar_data.Left45RearRange <= 7 || sonar_data.Right45RearRange <= 7)
    {
        return 1;
    }
    return 0;
}
