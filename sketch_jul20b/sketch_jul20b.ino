// Constants
const int potPin = A0; // Connect potentiome
ter middle pin to A0

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int potValue = analogRead(potPin); // Read analog value (0–1023)
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(200); // Delay for readability
}
