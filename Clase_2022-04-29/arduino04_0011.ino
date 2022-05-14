// Codigo Ejemplo
int LedR_Pin = 6;
int LedO_Pin = 5;
int LedG_Pin = 3;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
Serial.begin(9600);
pinMode(LedR_Pin, OUTPUT);  
pinMode(LedO_Pin, OUTPUT);
pinMode(LedG_Pin, OUTPUT);  
}
void loop()
{
 sensorValue = analogRead(Fot_Pin);
 outputValue = map(sensorValue, 0, 1023, 0, 255); 
 Serial.print("Lectura: ");
 Serial.println(sensorValue);
 Serial.print("Mapeado: ");
 Serial.println(outputValue); 
 if (outputValue=0)
 {  
   digitalWrite(LedR_Pin, HIGH);
   digitalWrite(LedO_Pin, LOW);
   digitalWrite(LedG_Pin, LOW);
 }
 else if (outputValue>0 && outputValue<127)
 {
   digitalWrite(LedR_Pin, LOW);
   digitalWrite(LedO_Pin, HIGH);
   digitalWrite(LedG_Pin, LOW);
 }
 else if (outputValue>127)
 {
   digitalWrite(LedR_Pin, LOW);
   digitalWrite(LedO_Pin, LOW);
   digitalWrite(LedG_Pin, HIGH);
 }   

}