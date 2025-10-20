const int licht = A0;
void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
int messwert = analogRead(licht);
Serial.println(licht);
if ( messwert > 511) {
  digitalWrite(13,HIGH);
  
  
}
else {
digitalWrite(13,LOW);
  
}
}
