/*
Input: counts
Output: Spin, duty cycle 

Values were passed from runaway to turn to determine which
spin or pivot it would run
*/

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

void rightTurnSpin(int counts)
{
    int counts_offset = counts +LtCount;

    digitalWrite(leftDir_Pin, HIGH);
    digitalWrite(rightDir_Pin, LOW);
    while(LtCount < counts_offset)
    {
        analogWrite(rightPWM_Pin, rightDutyCycle);
        analogWrite(leftPWM_Pin, leftDutyCycle);        
    }

    digitalWrite(rightDir_Pin, HIGH);
    LtCount = 0;
    RtCount = 0;
}

void leftTurnSpin(int counts)
{
    int counts_offset = counts +RtCount;

    digitalWrite(leftDir_Pin, LOW);
    digitalWrite(rightDir_Pin, HIGH);
    while(RtCount < counts_offset)
    {
        analogWrite(rightPWM_Pin, rightDutyCycle);
        analogWrite(leftPWM_Pin, leftDutyCycle);
    }

    digitalWrite(leftDir_Pin, HIGH);
    LtCount = 0;
    RtCount = 0;
}
