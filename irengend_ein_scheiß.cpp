
int LED = 10;
int helligkeit;
int LDR = A0;


void setup() {
pinMode (LED, OUTPUT);
pinMode(13,OUTPUT); //ROt
pinMode(12,OUTPUT);
digitalWrite(LED,LOW);
Serial.begin(9600);
}

void loop() {

 helligkeit = analogRead(LDR);
 Serial.println(helligkeit);
if (helligkeit <  115) {//dunkel
  digitalWrite(LED,HIGH);
}     
else if (helligkeit > 30 && helligkeit < 60) {//mittel
  digitalWrite(LED,LOW);
  digitalWrite(13,HIGH);
  
}
else if (helligkeit > 70)          //hell
{
  digitalWrite(LED,LOW);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
}

}
