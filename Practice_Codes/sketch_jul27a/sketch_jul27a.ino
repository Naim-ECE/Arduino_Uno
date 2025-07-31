void setup() {
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Pin 8 HIGH, Pin 3 PWM 255");
  digitalWrite(8, HIGH);
  analogWrite(5, 255);
  delay(2000);
  
  Serial.println("Pin 8 LOW, Pin 3 PWM 100");
  digitalWrite(8, LOW);
  analogWrite(5, 100);
  delay(2000);
  
  Serial.println("Both OFF");
  digitalWrite(8, LOW);
  analogWrite(5, 0);
  delay(2000);
}