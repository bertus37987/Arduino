int sensorwert;
const int NTC = A0;

void setup() {
Serial.begin(9600);
}

void loop() {
sensorwert = analogRead(NTC);
//Serial.print("der Messwert Beträgt: ");
Serial.println(sensorwert);
//Serial.println("\n"); 
delay(200);

}
