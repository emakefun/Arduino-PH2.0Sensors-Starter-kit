#define RGB_RED    6//控制红灯引脚
#define RGB_GREEN  3//控制绿灯引脚
#define RGB_YELLOW   5//控制黄灯引脚

void setup()
{
    pinMode(RGB_RED,OUTPUT);//红灯引脚设置为输出
    pinMode(RGB_GREEN,OUTPUT);//绿灯引脚设置为输出
    pinMode(RGB_YELLOW,OUTPUT);//黄灯引脚设置为输出
}
 
void loop()
{
     digitalWrite(RGB_RED,HIGH);//红灯亮
     delay(1000);
     digitalWrite(RGB_GREEN,HIGH);//绿灯亮
     delay(1000);
     digitalWrite(RGB_YELLOW,HIGH);//黄灯亮
     delay(1000);
     digitalWrite(RGB_RED,LOW);//红灯灭
     delay(1000);
     digitalWrite(RGB_GREEN,LOW);//绿灯灭
     delay(1000);
     digitalWrite(RGB_YELLOW,LOW);//黄灯灭
     delay(1000);
}