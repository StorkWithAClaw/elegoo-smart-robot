#include "MPU.h"
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;
int lastReadTime;

void InitMPU(){
  if (mpu.begin()){
    Serial.println("MPU 6050 Initialized");
  }

  lastReadTime = 0;

  mpu.setAccelerometerRange(0b01);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void ReadMPU(unsigned long currentTime){
  sensors_event_t a, g, temp;
  if ((currentTime * 0.000001) > lastReadTime + 5){
    mpu.getEvent(&a, &g, &temp);
    Serial.println("X Acceleration: ");
    Serial.println(a.acceleration.x);
    Serial.println("Y Acceleration: ");
    Serial.println(a.acceleration.y);
    Serial.println("---------");
    lastReadTime = (currentTime * 0.000001);
  }
}


