int gasSensor = A0;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  if (gasValue < 300) {
    // Safe = Green
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  else if (gasValue >= 300 && gasValue < 500) {
    // Moderate = Blue
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }

  else {
    // Dangerous = Red
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  delay(200);
}
	

