/*
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

  //Make 0 for runaway and 1 for Wander
  suppressionNode = 0;
}

void loop()
{
  for (;;)
  {
    switch(suppressionNode)
    {
      //runaway section
      case 0:
        feelforce();


        break;
        
      //Wander section
      case 1:
        feelforce();


        break;
    }

  }
}
