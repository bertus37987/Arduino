const int sensor = A0;
void setup() {
pinMode(13,OUTPUT);

}

void loop() {
int messwert = analogRead(sensor); //ldr wird gelesen
digitalWrite(13,HIGH);    //led schaltung mit messwert als delay
delay(messwert);
digitalWrite(13,LOW);
delay(messwert);

}
