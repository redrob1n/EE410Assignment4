/*
Feelforce takes the sonar reads from the array and creates
a repulsive vector using the feelForce functions.

*/

void feelForce()
{
  float forceI[8]; 
  float forceX = 0;
  float forceY = 0;
  float squares; 
  double angle;
  float k;
  
  k = 10000;
  angle = 0;

  ping();
  //circling through 8 sonar reads to find forceX and forceY.
  for(int i = 0; i < 8; i++){
  
    forceI[i] = k/(sonarRead[i]*sonarRead[i]);
    forceX += (forceI[i]*cos(angle));
    forceY += (forceI[i]*sin(angle));

    angle += (PI/4);
  }
  //Finding theta and force using the formulas.
  squares = (forceX*forceX)+(forceY*forceY);
  force = sqrt(squares);
  vectorAngle = atan2(-forceY, -forceX);
  vectorAngle = vectorAngle*57.2958;
  
  Serial.println(force);
}

