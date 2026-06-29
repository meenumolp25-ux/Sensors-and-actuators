const int potPin = A0;
const int buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  // Map potentiometer value (0-1023)
  // to frequency range (100-2000 Hz)
  int frequency = map(potValue, 0, 1023, 100, 2000);

  tone(buzzerPin, frequency);

  delay(10);
}
