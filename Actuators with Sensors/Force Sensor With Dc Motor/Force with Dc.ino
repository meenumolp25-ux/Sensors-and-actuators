int forceSensor = A0;
int motor = 9;

void setup() {
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int force = analogRead(forceSensor);

  Serial.println(force);

  if (force > 300) {
    digitalWrite(motor, HIGH);
  } else {
    digitalWrite(motor, LOW);
  }

  delay(100);
}
