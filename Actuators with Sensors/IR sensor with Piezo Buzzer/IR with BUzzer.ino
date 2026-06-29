int irSensor = 2;

void setup() {
  pinMode(irSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(irSensor);

  Serial.println(value);

  delay(500);
}
