int pirSensor = 2;
int vibrationMotor = 8;

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(vibrationMotor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirSensor);

  Serial.println(motion);

  if (motion == HIGH) {
    digitalWrite(vibrationMotor, HIGH);
  } else {
    digitalWrite(vibrationMotor, LOW);
  }

  delay(100);
}
