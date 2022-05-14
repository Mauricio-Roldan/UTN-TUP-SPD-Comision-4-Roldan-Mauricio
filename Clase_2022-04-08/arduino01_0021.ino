// C++ code
//
int Led_1=13, Led_2=12, Led_3=11, Sonido=10;
void setup()
{
  pinMode(Led_1, OUTPUT);
  pinMode(Led_2, OUTPUT);
  pinMode(Led_3, OUTPUT);
  pinMode(Sonido, OUTPUT);
}

void loop()
{
  tone(Sonido, 500, 500);
  delay(0);
  digitalWrite(Led_1, HIGH);
  delay(1000); // Esperar por 3000 milisegundos
  digitalWrite(Led_1, LOW);
  delay(500); // Esperar por 500 milisegundos
  tone(Sonido, 500, 500);
  delay(0);
  digitalWrite(Led_2, HIGH);
  delay(1000); // Esperar por 3000 milisegundos
  digitalWrite(Led_2, LOW);
  delay(500); // Esperar por 500 milisegundos
  digitalWrite(Led_3, HIGH);
  tone(Sonido, 1000, 500);
  delay(500);
  delay(1000); // Esperar por 3000 milisegundos
  digitalWrite(Led_3, LOW);
  delay(500); // Esperar por 500 milisegundos
}