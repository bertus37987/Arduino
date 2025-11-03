
int LED = 10;
int helligkeit;
int LDR = A0;

void setup() {
pinMode (LED, OUTPUT);
digitalWrite(LED,LOW);
Serial.begin(9600);
}

void loop() {

 helligkeit = analogRead(LDR);
 Serial.println(helligkeit);
if (helligkeit < 115) {
  digitalWrite(LED,HIGH);
}     
else  {
  digitalWrite(LED,LOW);
}

}
