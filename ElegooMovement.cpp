#include "ElegooUltrasonic.h"
#include <Arduino.h>

#define MotorPinPWMA 5
#define MotorPinPWMB 6
#define MotorPinBIN1 8
#define MotorPinAIN1 7
#define MotorPinStandby 3


int distanceMin = 50;
int distance;

void InitMovement(){
  pinMode(MotorPinPWMA, OUTPUT);
  pinMode(MotorPinPWMB, OUTPUT);
  pinMode(MotorPinBIN1, OUTPUT);
  pinMode(MotorPinAIN1, OUTPUT);
  pinMode(MotorPinStandby, OUTPUT);
  
  digitalWrite(MotorPinStandby, HIGH);
}

void HandleMovement(){
  distance = GetDistance();
  if (distance > distanceMin){
    // Move Forward
    digitalWrite(MotorPinAIN1, HIGH);
    digitalWrite(MotorPinBIN1, HIGH);
    analogWrite(MotorPinPWMA, 100);
    analogWrite(MotorPinPWMB, 100);

  }

}


//  pinMode(MotorPinPWMA, OUTPUT);
//   pinMode(MotorPinPWMB, OUTPUT);
//   pinMode(MotorPinBIN1, OUTPUT);
//   pinMode(MotorPinAIN1, OUTPUT);
//   pinMode(MotorPinStandby, OUTPUT);

//   digitalWrite(MotorPinStandby, HIGH);
//   delay(2000);
//   digitalWrite(MotorPinAIN1, HIGH); // Direction (HIGH = Forward)
//   digitalWrite(MotorPinBIN1, HIGH);
//   analogWrite(MotorPinPWMA, 255); // Speed (0-255)
//   analogWrite(MotorPinPWMB, 255);