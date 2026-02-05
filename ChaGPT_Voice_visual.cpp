#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

bool running = true;


Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
Wire.begin(21, 20);                      //Nur nötig für ESP32
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

display.setTextSize(3);
display.setTextColor(SSD1306_WHITE);
}


void loop() {
while (running == true)
{
  int random_number = random(15,32);
    display.clearDisplay();
    display.fillCircle(64,32,random_number,SSD1306_WHITE); 
    display.display();
    delay(100);
}

}
