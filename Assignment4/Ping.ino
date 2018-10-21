
//pins for sonars
int FrontSonar_pin = 38;
int Left45FrontSonar_pin = 39;
int LeftSonar_pin = 40;
int Left45RearSonar_pin = 41;
int RearSonar_pin = 42;
int Right45RearSonar_pin = 43;
int RightSonar_pin = 44;
int Right45FrontSonar_pin = 45;

float FrontRange;
float Left45FrontRange;
float Right45FrontRange;
float LeftRange;
float RightRange;
float Left45RearRange;
float Right45RearRange;
float RearRange;



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

void ping()
{
    FrontRange = SonarRange(FrontSonar_pin);   
    Left45FrontRange = SonarRange(Left45FrontSonar_pin);
    Right45FrontRange = SonarRange(Right45FrontSonar_pin);
    LeftRange = SonarRange(LeftSonar_pin);
    RightRange = SonarRange(RightSonar_pin);
    Left45RearRange = SonarRange(Left45RearSonar_pin);
    Right45RearRange = SonarRange(Right45RearSonar_pin);
    RearRange = SonarRange(RearSonar_pin);    
    
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
