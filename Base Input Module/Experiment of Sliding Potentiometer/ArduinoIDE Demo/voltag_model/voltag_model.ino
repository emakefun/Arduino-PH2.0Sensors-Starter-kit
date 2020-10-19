float i=0,j=0,data;  
int analogPin = A3;
void setup()
{
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
    data=analogRead(analogPin);
    i=data/1023;
    j=(1-i)*1000;  
    Serial.print("Resistance value is: ");
    Serial.print(j);
    Serial.println("Ω");
    delay(200);
}
