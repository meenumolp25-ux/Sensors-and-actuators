void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH); // Red ON
  digitalWrite(10, LOW);
  delay(1000);

  digitalWrite(11, LOW);
  digitalWrite(10, HIGH); // Green ON
  delay(1000);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH); // Both ON
  delay(1000);
}
