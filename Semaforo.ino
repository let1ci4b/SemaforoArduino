int v1 = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(5, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
}
