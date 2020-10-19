#include <Wire.h> 
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27,16,2);  // 将LCD地址设置为0x27以显示16个字符和2行

void setup()
{
    lcd.init();                      //初始化LCD1602
    // Print a message to the LCD.
    lcd.backlight();
   
}

void loop()
{
    lcd.setCursor(2,0); // 第一个参数为列,第二个参数为行,从第一行的,第三列开始显示
    lcd.print("Hello, world!");//显示Hello, World！
    lcd.setCursor(4,1); // 第一个参数为列,第二个参数为行,从第二行的,第五列开始显示
    lcd.print("Welcome");//显示Welcome
}
