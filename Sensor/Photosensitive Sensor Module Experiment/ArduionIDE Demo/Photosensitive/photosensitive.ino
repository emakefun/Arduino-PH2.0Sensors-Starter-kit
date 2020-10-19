#define PhotosensitivePin  A3//定义光敏传感器模块引脚
#define LedPin 3//定义LED模块引脚
int  PhotosensitiveValue = 0 ;//定义数字变量,读取光敏值
void setup()
{
  Serial.begin(9600);//设置串口波特率
  pinMode(PhotosensitivePin, INPUT);//设置光敏传感器模块引脚为输入
  pinMode(LedPin, OUTPUT);//设置LED模块引脚为输出
}
void loop()
{
  PhotosensitiveValue = analogRead(PhotosensitivePin);//读取光敏值
  Serial.print("Photosensitive Data:  ");
  Serial.println(PhotosensitiveValue);//打印光敏值
  if (PhotosensitiveValue < 50) { //打印光敏值
    digitalWrite(LedPin, HIGH);//如果光敏值小于50则执行此处,LED引脚为高电平
  } else {
    digitalWrite(LedPin, LOW);//如果光敏值小于50则执行此处,LED引脚为低电平
  }
}