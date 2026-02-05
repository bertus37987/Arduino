//benötigt die Adafruit SSD1306 libary Arduino -> Bibiotheken 'Adafruit SSD1306'
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);


void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Display starten
  display.setTextSize(2);      
  display.setTextColor(WHITE); 
}

void loop() {
  display.clearDisplay();      // 1. Alten Inhalt löschen
  display.setCursor(0, 10);    // 2. Schreibposition setzen
  display.print("Hallo, 10c");
  
  display.display();           // 3. Anzeigen!

}
