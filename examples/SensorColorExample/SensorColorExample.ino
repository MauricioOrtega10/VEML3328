#include <Arduino.h>
#include "Wire.h"
#include "VEML3328.h"

void setup() 
{
  Serial.begin(9600);
  Wire.begin(); 
  colorsensor.defaultBegin();
}

void loop() 
{
  Serial.print("Blue:");
  Serial.print(colorsensor.getBlue());   //read blue channel
  Serial.print(','); 
  Serial.print("Red:");
  Serial.print(colorsensor.getRed());    //read red channel
  Serial.print(',');  
  Serial.print("Green:");
  Serial.print(colorsensor.getGreen());  //read green channel
  Serial.print(',');  
  Serial.print("Clear:");
  Serial.print(colorsensor.getClear());  //read clear channel
  Serial.print(',');          
  Serial.print("IR:");
  Serial.println(colorsensor.getIR());   //read IR channel
  delay(100);
}