// Timbre
int LedR_Pin = 13;
int LedG_Pin = 11;
int Buz_Pin = 6;
int Int_Pin = 2;
int inputValue = 0;
void setup()
{
pinMode(LedR_Pin, OUTPUT);
pinMode(Buz_Pin, OUTPUT);
pinMode(Int_Pin, INPUT);
pinMode(LedG_Pin, OUTPUT);  
delay(250);
digitalWrite(LedR_Pin, 1);
tone(Buz_Pin, 900, 250);
delay(500);
digitalWrite(LedR_Pin, 0);
tone(Buz_Pin, 900, 250);
delay(500);
digitalWrite(LedR_Pin, 1);
tone(Buz_Pin, 900, 250);
delay(800);
digitalWrite(LedR_Pin, 0);
}
void loop()
{
// Lectura Digital
inputValue = digitalRead(Int_Pin);
if (inputValue == HIGH)
{
digitalWrite(LedG_Pin, HIGH);  
tone(Buz_Pin, 493, 1014);
delay(1000);
tone(Buz_Pin, 392, 1275);
delay(1000);
digitalWrite(LedG_Pin, LOW);  
}
else
{
noTone(Buz_Pin);
}
delay(1000);
digitalWrite(LedR_Pin, 1);
delay(250);
digitalWrite(LedR_Pin, 0);
}