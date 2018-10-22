
#ifndef _GLOBALS_H
#define _GLOBALS_H

/*
*
* Variables in this file are global to this sketch. Include only once
*
*
*/

//  encoder variables
extern void LogoPrint();
const int COUNTS_PER_CM = 71;
const int DIST_CM = 100;
const int DIST_TO_TRAVEL = DIST_CM * COUNTS_PER_CM;

volatile long LtCount = 0;
volatile long RtCount = 0;

int leftDir_Pin = 8;
int leftPWM_Pin = 9;
int rightDir_Pin = 10;
int rightPWM_Pin = 11;

int leftDutyCyclePercent;
int rightDutyCyclePercent;
int leftDutyCycle;
int rightDutyCycle;

int LtCountDel;
int RtCountDel;
int LtPrev;
int RtPrev;

int state = 0;
int next = 0;
unsigned long T0;
unsigned long T;

//pins for sonars
int FrontSonar_pin = 38;
int Left45FrontSonar_pin = 39;
int LeftSonar_pin = 40;
int Left45RearSonar_pin = 41;
int RearSonar_pin = 42;
int Right45RearSonar_pin = 43;
int RightSonar_pin = 44;
int Right45FrontSonar_pin = 45;

typedef struct
{
    float FrontRange;
    float Left45FrontRange;
    float Right45FrontRange;
    float LeftRange;
    float RightRange;
    float Left45RearRange;
    float Right45RearRange;
    float RearRange;
} sonar_t;

sonar_t sonar_data;

#endif /* _GLOBALS_H */