const int sensor = A0;

void setup() {
Serial.begin(9600);



}

void loop() {
int messwert = analogRead(sensor);
Serial.println(messwert);
delay(1000);
}
