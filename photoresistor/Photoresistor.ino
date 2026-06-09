void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(A0);

  Serial.print("Light Value = ");
  Serial.println(lightValue);

  delay(500);
}
