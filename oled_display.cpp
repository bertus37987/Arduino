//benötigt die Adafruit SSD1306 libary Arduino -> Bibiotheken 'Adafruit SSD1306'
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

int zaehler = 0; // Variable für unseren Zähler

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Display starten
  display.setTextSize(2);      
  display.setTextColor(WHITE); 
}

void loop() {
  display.clearDisplay();      // 1. Alten Inhalt löschen
  display.setCursor(0, 10);    // 2. Schreibposition setzen
  
  display.println("counter"); // Text schreiben
  display.print(zaehler);      // Variable schreiben
  
  display.display();           // 3. Anzeigen!
  
  zaehler = zaehler + 1;       // Zähler erhöhen
  delay(1000);                 // 1 Sekunde warten
}
