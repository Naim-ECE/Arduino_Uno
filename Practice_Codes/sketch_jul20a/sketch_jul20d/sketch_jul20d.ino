int pins[] = {9, 5, 2};  // PWM pins: 9,5; Button pin: 2
int buzzerPin = 7;        // Buzzer on pin 7 (non-PWM)
int n = 3;

void setup() {
  for (int i = 0; i < n; ++i) {
    if (i == 2) {
      pinMode(pins[i], INPUT_PULLUP);  // Button pin (internal pull-up)
    } else {
      pinMode(pins[i], OUTPUT);        // PWM pins
    }
  }
  pinMode(buzzerPin, OUTPUT);  // Buzzer pin
}

void loop() {
  // Fade LED on pin[1] (PWM pin 5)
  analogWrite(pins[1], 12);    // Dim
  delay(200);
  analogWrite(pins[1], 128);   // Medium brightness
  delay(200);

  // Check button (pin[2]) and trigger buzzer
  bool buttonPressed = (digitalRead(pins[2]) == LOW);  // Active-low (pulled-up)
  if (buttonPressed) {
    digitalWrite(buzzerPin, HIGH);  // Buzzer ON
    delay(500);                     // Beep for 500ms
    digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  }
}