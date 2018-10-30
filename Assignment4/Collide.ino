


uint8_t checkForForwardCollisions()
{
    if(sonarRead[0] <= 20 || sonarRead[1] <= 20 || sonarRead[7]  <= 20)
    {       
        /*digitalWrite(buzzer_Pin,HIGH);
        delay(10);
        digitalWrite(buzzer_Pin,LOW);*/
        return 1;
    }
    return 0;
}

