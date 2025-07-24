int pin = 9;
void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  analogWrite(pin, 12);
  delay(2000);
  analogWrite(pin, 128);
  delay(2000);
}