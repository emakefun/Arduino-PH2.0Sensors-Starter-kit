#include "IRremote.h"
#include "Keymap.h"

IRremote ir(3);

unsigned char keycode;
char str[128];
void setup()
{
  Serial.begin(9600); // Set the serial port baud rate to 9600
  ir.begin();
}

void loop()
{
  if (keycode = ir.getCode()) { // Determine whether the key is pressed and assign the key value to keycode
    String key_name = ir.getKeyMap(keycode, IR_TYPE_EM);
    sprintf(str, "Get ir code: 0x%x key name: %s \n", keycode, (char *)key_name.c_str());
    Serial.println(str);  // Print key value
    }
  delay(110);
}
