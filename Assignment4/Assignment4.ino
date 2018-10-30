/*
*
*
*
*
*
*/
#include "globals.h"

#define layer0
#define layer1

int activestage = layer0;
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);

  motor_init();
  sonar_init();
}

void loop()
{
  for (;;)
  {
    ping();
    //collideFlagLayer0 = checkForForwardCollisions();
    if (checkForForwardCollisions())
    {
      motor_stop();
    }
    
    feelForce();
    turn();
  }
}
