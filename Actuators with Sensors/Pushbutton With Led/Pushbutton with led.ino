int buttonPin = 2;
int ledPin = 8;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if(digitalRead(buttonPin) == LOW)
  {
    digitalWrite(ledPin, HIGH);   // Button pressed
  }
  else
  {
    digitalWrite(ledPin, LOW);    // Button released
  }
}
