int sensor = A0;
float messwert;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.begin(9600);
  Serial.println("Willkommen beim Batterie-Tester!");
  Serial.println("Rot = < 1.3V | Gelb = 1.3 - 1.5V | Grün = > 1.5V");
  Serial.println("Rot = Fehler bei falscher Polung.");
}

void loop() {
  messwert = analogRead(sensor);
  float u = messwert / 1023.0 * 5.0;

  Serial.print("Der Messwert beträgt: ");
  Serial.print(u);
  Serial.println(" V");

  delay(500);

  if (messwert < 1) {
    Serial.println("Batterie ist falschherum. Fehlercode: 1");
    for (int i = 0; i < 5; i++) {
      digitalWrite(10, HIGH);
      delay(100);
      digitalWrite(10, LOW);
      delay(100);
    }
  } else {
    for (int i = 0; i < 10; i++) {
      digitalWrite(11, HIGH);
      delay(100);
      digitalWrite(11, LOW);
      delay(100);
    }
  }

  if (u < 1.3) {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay(1000);
  } else if (u >= 1.3 && u <= 1.5) {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  } else if (u > 1.5) {
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
  }

  delay(1000);
}

