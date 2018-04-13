#include <Wire.h>
#include "rgb_lcd.h"
#include <math.h>

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
const int sensor=A2; 

void setup() 
{
  start:
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    

    Serial.begin(9600);
}

void loop() 
{
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
  if(analogRead(A2) >70)
  {
    lcd.print("You got mail!");
  }
  else if(analogRead(A2) <70)
  {
    lcd.print("No mail");
  }

    delay(1000);
      int sensorValue=analogRead(sensor);
  Serial.println("the analog read data is ");
  Serial.println(sensorValue);
  delay(1000);
}

