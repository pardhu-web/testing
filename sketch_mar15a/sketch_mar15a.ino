#define relay 8

void setup()
{
  pinMode(relay, OUTPUT);
Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char data = Serial.read();
    if (data == '1')
    {
      digitalWrite(relay, HIGH);
    }

    if (data == '0')
    {
      digitalWrite(relay, LOW);
    }
  }
}
