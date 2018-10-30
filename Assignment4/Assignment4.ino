/*
*
*
*/
#include "globals.h"

#define layer0
#define layer1

//int activestage = layer0;
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);

  motor_init();
  sonar_init();

  
  //Make 0 for runaway and 1 for Wander
  suppressionNode = 0;
}

void loop()
{

  //feelForce();
  //runAway(vectorAngle);

  for (;;)
  {
    switch(suppressionNode)
    {
      //runaway section
      case 0:
      {        
        feelForce();
        if(force > 15)
          runAway();

        break;
      }
      //Wander section
      case 1:
        feelForce();
        wanderHeading = wander();
        avoid(wanderHeading, vectorAngle);

        break;
    }

  }
}
