#define LED  3//定义LED控制引脚
void setup() 
{
  pinMode(LED,OUTPUT);//设置LED引脚的控制引脚为输出模式
}

void loop() 
{
 digitalWrite(LED,HIGH);//设置LED引脚输出高电平
 delay(500);
 digitalWrite(LED,LOW);//设置LED引脚输出低电平
 delay(500);
}
