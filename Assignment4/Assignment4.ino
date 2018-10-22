/*  Program finds the number of left and right motor encoder counts
 *   using microcontroller interrupts.
*/
#include "globals.h"


void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  
  encoder_init();
  sonar_init();
}

void loop()
{
  sonar_data = ping();
  if (checkForForwardCollisions())
  {
    analogWrite(leftPWM_Pin, 0);
    analogWrite(rightPWM_Pin, 0);
  }
}
