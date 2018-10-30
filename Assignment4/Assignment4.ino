/*
*
*
*
*
*
*/
#include "globals.h"

void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);

  //motor_init();
  sonar_init();
  suppressionNode = 0;
}

void loop()
{
  for (;;)
  {
    /*ping();
    if (checkForForwardCollisions())
    {
      motor_stop();
    }*/
    
    feelForce();
  }
}
