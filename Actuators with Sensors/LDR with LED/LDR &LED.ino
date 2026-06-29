int ldr = A0;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldr);

  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}

