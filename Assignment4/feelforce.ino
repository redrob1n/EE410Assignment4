void Feelforce()
{
  float forceI[8];
  float forceX = 0;
  float forceY = 0;
  float force, squares; 
  double vectorAngle, angle;
  int k;
  
  k = 20;
  angle = 0;
  
  for(int i = 0; i < 8; i++){
    forceI[i] = k/(sonarRead[i]);
    forceX =+ (forceI[i]*cos(angle));
    forceY =+ (forceI[i]*sin(angle));
    angle =+ PI/4;
    }

    squares = (forceX * forceX) + (forceY * forceY);
    force = sqrt(squares);
    vectorAngle = atan2(-forceY, -forceX);
}
