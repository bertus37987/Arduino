const int sensor = A0;
int messwert;
const int led = 13;
float wartezeit;

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);  

}

void loop() {
messwert = analogRead(sensor); //wiederstand wird gelesen
Serial.println(messwert);      //messwert wird in das terminal gedruckt

 float wartezeit = messwert / 20.0; //das delay wird ausgerechnet
 
 digitalWrite(led,HIGH);
delay(wartezeit);       //das ist die wartezeit ehöht die frequenz
digitalWrite(led,LOW);
delay(wartezeit);

}
