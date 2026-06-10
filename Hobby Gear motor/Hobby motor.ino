int motorPin = 8;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH);
  delay(3000);

  digitalWrite(motorPin, LOW);
  delay(3000);
}

