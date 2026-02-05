#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  //Wire.begin(21, 20);                      // SDA, SCL NICHT FÜR ARDUINO RELVANT
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  display.clearDisplay();
  display.setCursor(0, 10);
  for (int i = 0; i < 32; i++)
  {
    display.clearDisplay();
    display.fillCircle(64,32,i,SSD1306_WHITE); 
    display.setCursor(0, 10);
    display.display();
    delay(100);
  }
}
