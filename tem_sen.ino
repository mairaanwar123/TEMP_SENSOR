int tem_sen = A0;
void setup() 
{
pinMode(tem_sen,INPUT);
Serial.begin(9600);
}
void loop()
{
 int var = analogWrite(tem_sen);
 Serial.println(var); 
}
