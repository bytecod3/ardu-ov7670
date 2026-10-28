/*
 * LAB Name: Arduino OV7670 Camera (Video) Example
 * Author: Khaled Magdy
 * For More Info Visit: www.DeepBlueMbedded.com
*/
#include "OV7670_UART.h"

void setup() 
{
  initializeScreenAndCamera();
  pinMode(8, INPUT_PULLUP);
}

void loop() 
{
  processFrame();
}
