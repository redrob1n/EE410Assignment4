

void encoder_init()
{
    attachInterrupt(1, LtEncoderRead, RISING); //pin 3
    attachInterrupt(0, RtEncoderRead, RISING); //pin 2

    //setup motor control pins
    pinMode(leftDir_Pin, OUTPUT);
    pinMode(leftPWM_Pin, OUTPUT);
    pinMode(rightDir_Pin, OUTPUT);
    pinMode(rightPWM_Pin, OUTPUT);

    //initialize motor speeds to equal values
    leftDutyCyclePercent = 20;
    rightDutyCyclePercent = 20;
    leftDutyCycle = leftDutyCyclePercent * 255 / 100;
    rightDutyCycle = rightDutyCyclePercent * 255 / 100;

    //set motor direction forward
    digitalWrite(leftDir_Pin, HIGH);
    digitalWrite(rightDir_Pin, HIGH);

    // turn on motors
    analogWrite(leftPWM_Pin, leftDutyCycle);
    analogWrite(rightPWM_Pin, rightDutyCycle);

    LtCount = 0;
    RtCount = 0;
}

void LtEncoderRead()
{
  LtCount += 1;
}

void RtEncoderRead()
{
  RtCount += 1;
}

void setMotorSpeeds(int dutyCyclePercent)
{
  leftDutyCycle = dutyCyclePercent * 255 / 100;
  rightDutyCycle = dutyCyclePercent * 255 / 100;
}

void rightTurnPivot(int counts)
{
  int counts_offset = counts + LtCount;
  while (LtCount < counts_offset)
  {
    analogWrite(rightPWM_Pin, 0);
    analogWrite(leftPWM_Pin, leftDutyCycle);
  }
}

void leftTurnPivot(int counts)
{
  int counts_offset = counts + RtCount;
  while (RtCount < counts_offset)
  {
    analogWrite(rightPWM_Pin, rightDutyCycle);
    analogWrite(leftPWM_Pin, 0);
  }
}