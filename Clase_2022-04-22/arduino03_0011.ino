// C++ code
//
int multimetro=11, led=10, potenciometro=A0;
int sensorValue=0, outputValue=0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(multimetro, OUTPUT);
  testLed();
}

void loop()
{
  sensorValue = analogRead(potenciometro);
  outputValue = map(sensorValue, 0, 1023, 0, 254);
  analogWrite(led, outputValue);
  analogWrite(multimetro, outputValue);
}

void testLed()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
} 