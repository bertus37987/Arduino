const int sensor = A0;
void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
int messwert = analogRead(sensor);
Serial.print("der Messwer beträgt: ");
Serial.println(messwert);
digitalWrite(13,HIGH);
delay(messwert);
digitalWrite(13,LOW);
delay(messwert);

}
