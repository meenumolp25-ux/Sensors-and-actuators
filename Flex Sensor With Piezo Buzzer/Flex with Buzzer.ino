int flexPin = A0;
int buzzerPin = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  int value = analogRead(flexPin);

  Serial.println(value);

  if(value > 300)
  {
    tone(buzzerPin, 1000);
  }
  else
  {
    noTone(buzzerPin);
  }

  delay(200);
}
