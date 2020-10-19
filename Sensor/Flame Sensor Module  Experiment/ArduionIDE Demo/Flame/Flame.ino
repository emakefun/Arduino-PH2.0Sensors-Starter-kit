#include "Buzzer.h"

#define FlamelDigitalPin  7//定义火焰传感器数字引脚
#define FlamelAnalogPin   A0//定义火焰传感器模拟引脚
#define BuzzerPin A3//定义无源蜂鸣器块引脚

Buzzer buzzer(BuzzerPin) ;
int  FlamelAnalogValue = 0 ;//定义数字变量,读取火焰模拟值
int  FlamelDigitalValue = 0 ;//定义数字变量,读取火焰数字值
void setup()
{
  Serial.begin(9600);//设置串口波特率
  pinMode(FlamelDigitalPin, INPUT);//设置火焰传感器数字引脚为输入
  pinMode(FlamelAnalogPin, INPUT);//设置火焰传感器模拟引脚为输入
  pinMode(BuzzerPin, OUTPUT);//设置无源蜂鸣器模块引脚为输出
}
void loop()
{
  buzzer.noTone();//蜂鸣器停止
  FlamelAnalogValue = analogRead(FlamelAnalogPin);//读取火焰传感器模拟值
  FlamelDigitalValue = digitalRead(FlamelDigitalPin);//读取火焰传感器数字值
  Serial.print("FlamelAnalog Data:  ");
  Serial.print(FlamelAnalogValue);//打印火焰传感器模拟值
  Serial.print("       FlamelDigital Data:  ");
  Serial.println(FlamelDigitalValue);//打印火焰传感器数字值
  if (FlamelDigitalValue == 0) {//判断火焰传感器是否检测到火焰  检测到火焰  蜂鸣器报警 
     for(int i = 200; i <= 800; i++)
     {
       buzzer.tone(i, 10);
     }
     for(int i= 800; i >= 200; i--)
     {
        buzzer.tone(i, 10);
     }
  }
  delay(200);
}