#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

#define IN1 12
#define IN2 13
#define IN3 14
#define IN4 15

void motorBegin();

void motorStop();
void motorForward();
void motorBackward();
void motorLeft();
void motorRight();

#endif