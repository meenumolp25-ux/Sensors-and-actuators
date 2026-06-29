int sensorPin = A0;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);

  Serial.println(value);

  if (value > 200) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}
