#define INB 6  //定义电机B端口
#define INA 5  //定义电机A端口

void setup()
{
    pinMode(INB, OUTPUT);  //设置电机B端口为输出模式
    pinMode(INA, OUTPUT);  //设置电机A端口为输出模式 
}

void loop()
{         
    analogWrite(INA, 255);  //设置电机A端口为高电平
	analogWrite(INB, 0); //设置电机B端口为低电平
	delay(2000);               //2s之后电机反转
    analogWrite(INA, 0);  //设置电机A端口为低电平
    analogWrite(INB, 255); //设置电机B端口为高电平
	delay(2000);                //电机反转2s然后正转
}