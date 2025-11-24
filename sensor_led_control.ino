const int sensor = A0;
int messwert;
int ummapung;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  messwert = analogRead(sensor);
  ummapung = map(messwert, 0, 1023, 0, 255);
  
  // Alle LEDs ausschalten
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  if(ummapung <= 83) {
    digitalWrite(3, HIGH);
  }
  else if(ummapung >= 84 && ummapung <= 169) {
    digitalWrite(5, HIGH);
  }
  else if (ummapung >= 170 && ummapung <= 255) {
    digitalWrite(6, HIGH);
  }
}