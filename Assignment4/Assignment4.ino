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

  motor_init();
  sonar_init();
}

void loop()
{
  for (;;)
  {
    ping();

    if (checkForForwardCollisions())
    {
      motor_stop();
    }

    feelForce();
    delay(20);
  }
}
