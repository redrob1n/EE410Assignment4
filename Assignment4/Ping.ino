



/*
* initializes sonar pins 
*/
void sonar_init()
{
    pinMode(FrontSonar_pin, OUTPUT);
    pinMode(Left45FrontSonar_pin, OUTPUT);
    pinMode(LeftSonar_pin, OUTPUT);
    pinMode(Left45RearSonar_pin, OUTPUT);
    pinMode(RearSonar_pin, OUTPUT);
    pinMode(Right45RearSonar_pin, OUTPUT);
    pinMode(RightSonar_pin, OUTPUT);
    pinMode(Right45FrontSonar_pin, OUTPUT); 
}

sonar_t ping()
{
    sonar_t data;
    data.FrontRange = SonarRange(FrontSonar_pin);   
    data.Left45FrontRange = SonarRange(Left45FrontSonar_pin);
    data.Right45FrontRange = SonarRange(Right45FrontSonar_pin);
    data.LeftRange = SonarRange(LeftSonar_pin);
    data.RightRange = SonarRange(RightSonar_pin);
    data.Left45RearRange = SonarRange(Left45RearSonar_pin);
    data.Right45RearRange = SonarRange(Right45RearSonar_pin);
    data.RearRange = SonarRange(RearSonar_pin);    
    return data;
    
}

/*
* returns the range from a sonar
*/
float SonarRange(int sonar_pin) 
{
    float echo;  
    float range;
    pulseOut(sonar_pin);                      //sends out a ultrasonic pulse
    pinMode(sonar_pin, INPUT);
    echo = pulseIn (sonar_pin, HIGH);         //times the return pulse
    range = echo/58.0;                       //converts round trip pulse time to distance
    delay(50);  
    return range;
}

//pings the ultrasonic sensor
void pulseOut(int pin) 
{
    pinMode(pin, OUTPUT);  
    digitalWrite(pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(pin, LOW);
}
