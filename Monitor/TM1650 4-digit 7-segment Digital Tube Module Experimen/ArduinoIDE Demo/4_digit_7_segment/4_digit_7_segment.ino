#include <Wire.h>
#include "TM1650.h"

TM1650 tm_4display;

void setup() 
{
  Wire.begin(); //Join the bus as master
  Serial.begin(9600); //设置波特率9600
  Serial.println("OpenSegment Example Code");
  tm_4display.init();  //初始化
  delay(1000);  
}

void loop() 
{
  tm_4display.displayString("1234");//显示数字1234
}
