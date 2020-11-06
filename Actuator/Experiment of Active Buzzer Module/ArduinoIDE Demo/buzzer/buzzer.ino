#define buzzer_pin A3  // Set the buzzer port to A3
void setup() {
  pinMode(buzzer_pin, OUTPUT);  // Set the buzzer port to output mode
}

void loop()  {
  digitalWrite(buzzer_pin,HIGH);  // Set the buzzer port to high level
  delay(1);                       // Delay 1 ms
  digitalWrite(buzzer_pin,LOW);   // Set the buzzer port to low level
  delay(1);                       // Delay 1 ms
}
