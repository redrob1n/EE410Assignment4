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
}

void loop()
{
  for (;;)
  {
<<<<<<< Updated upstream
    ping();

    if (checkForForwardCollisions())
    {
      motor_stop();
    }

    feelForce();
    delay(20);
=======
    /*ping();
    if (checkForForwardCollisions())
    {
      motor_stop();
    }*/

    Feelforce();
>>>>>>> Stashed changes
  }
}
