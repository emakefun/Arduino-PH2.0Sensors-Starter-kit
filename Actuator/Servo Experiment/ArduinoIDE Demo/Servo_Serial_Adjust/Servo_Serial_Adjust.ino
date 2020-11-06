#include <Servo.h>

Servo servo;

void setup() {

  servo.attach(3); // Set the servo signal pin

}

void loop()  {

   servo.write(0);  // Set the angle the servo needs to turn
   delay(2000);
   servo.write(180);
   delay(2000);
}
