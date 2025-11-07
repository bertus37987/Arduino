int ATC = A0;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
}

void loop() {
int messung_a = analogRead(ATC);
delay(2000);
int messung_b = analogRead(ATC);
delay(100);
if(messung_a < messung_b)
{
  digitalWrite(13,LOW);
  Serial.println("led aus");

}
else 
{

  digitalWrite(13,HIGH);
  Serial.print("led ist an");
  Serial.print(" | ");
  Serial.print(messung_a);
  Serial.print(" | ");
  Serial.print(messung_b);
  
}





  
}





