int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter '1' to turn on & '0' to turn off");
};

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(ledPin, HIGH);
  // delay(1000);
  // digitalWrite(ledPin, LOW);
  // delay(100);
    if (Serial.available() > 0) {  // Check if data is received
    char input = Serial.read();  // Read the input

    if (input == '1' || input == '4') {
      digitalWrite(ledPin, HIGH);  // Turn ON
      Serial.println("LED ON");
    } 
    else if (input == '0') {
      digitalWrite(ledPin, LOW);   // Turn OFF
      Serial.println("LED OFF");
    }
    else {
      Serial.println("Invalid input! Send '1' or '0'.");
    }
  }
};
