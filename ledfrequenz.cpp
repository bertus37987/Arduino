const int sensor = A0;
int messWert;
const int led = 13;
float wartezeit;

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);  

}

void loop() {
messWert = analogRead(sensor); //wiederstand wird gelesen
Serial.println(messwert);      //messwert wird in das terminal gedruckt

 float wartezeit = messwert / 2.0; //das delay wird ausgerechnet
 
for(int i = 0; i < messwert; i++); //wird mal den wiederstand wiederholt
{
  digitalWrite(led,HIGH);
  delay(wartezeit);       //das ist die wartezeit ehöht die frequenz
  digitalWrite(led,LOW);
  delay(wartezeit);
}
}
