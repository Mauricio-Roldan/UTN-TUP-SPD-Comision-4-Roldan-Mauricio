// C++ code
//
int buttonState;
void setup()
{
  pinMode(13, OUTPUT);//Led rojo
  pinMode(9, OUTPUT);//Led azul
  pinMode(7, OUTPUT);//Sonido
  pinMode(1, INPUT);//Boton
}

void loop()
{
  buttonState=digitalRead(1);
  if (buttonState==HIGH)
  {
    tone(7, 1000, 500);//Sonido led rojo 
    digitalWrite(13, HIGH);//Led rojo encendido
    delay(500);
    digitalWrite(9, LOW);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
    tone(7, 500, 500);//Sonido led azul
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(9, LOW);
    delay(100);
  } 
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
  }
}