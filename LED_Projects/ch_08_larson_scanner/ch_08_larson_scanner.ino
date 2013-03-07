// Chapter 8. Larson Scannerk

int period = 200;

void setup()
{
  for (int pin = 3; pin < 14; pin++)
  {
    pinMode(pin, OUTPUT);
  } 
}

void loop()
{
  for (int pin = 3; pin < 14; pin++)
  {
    digitalWrite(pin, HIGH);
    delay(period);
    digitalWrite(pin, LOW);
  }
  for (int pin = 13; pin >2; pin--)
  {
    digitalWrite(pin, HIGH);
    delay(period);
    digitalWrite(pin, LOW);
  }
} 
