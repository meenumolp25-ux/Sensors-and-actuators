#define MOTOR_PIN 9

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR_PIN, HIGH); // Vibrate
  delay(1000);

  digitalWrite(MOTOR_PIN, LOW);  // Stop
  delay(1000);
}
