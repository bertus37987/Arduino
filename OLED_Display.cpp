// buffer
display.clearDisplay();        // Puffer löschen (noch nicht sichtbar)
display.display();             // Puffer auf dem Display anzeigen

// pixel
display.drawPixel(x,y,SSD1306_WHITE);    // Pixel an (weiß)
display.drawPixel(x,y,SSD1306_BLACK);    // Pixel aus (schwarz)
display.drawPixel(x,y,SSD1306_INVERSE);  // Pixel umschalten (invertieren)

// linien
display.drawLine(x0,y0,x1,y1,SSD1306_WHITE);   // Linie zeichnen
display.drawFastHLine(x,y,w,SSD1306_WHITE);    // Waagerechte Linie
display.drawFastVLine(x,y,h,SSD1306_WHITE);    // Senkrechte Linie

// rechteck
display.drawRect(x,y,w,h,SSD1306_WHITE);       // Rechteck (nur Rand)
display.fillRect(x,y,w,h,SSD1306_WHITE);       // Rechteck (gefüllt)
display.fillRect(x,y,w,h,SSD1306_BLACK);       // Bereich löschen (wie Radierer)

// kreis
display.drawCircle(x0,y0,r,SSD1306_WHITE);     // Kreis (nur Rand)
display.fillCircle(x0,y0,r,SSD1306_WHITE);     // Kreis (gefüllt)

// runde ecken
display.drawRoundRect(x,y,w,h,r,SSD1306_WHITE);// Rechteck mit runden Ecken (Rand)
display.fillRoundRect(x,y,w,h,r,SSD1306_WHITE);// Rechteck mit runden Ecken (gefüllt)

// dreieck
display.drawTriangle(x0,y0,x1,y1,x2,y2,SSD1306_WHITE); // Dreieck (nur Rand)
display.fillTriangle(x0,y0,x1,y1,x2,y2,SSD1306_WHITE); // Dreieck (gefüllt)

// text
display.setCursor(x,y);        // Textposition setzen
display.setTextSize(s);        // Textgröße setzen
display.setTextColor(SSD1306_WHITE);                 // Textfarbe setzen
display.setTextColor(SSD1306_WHITE,SSD1306_BLACK);   // Textfarbe + Hintergrundfarbe setzen
display.setTextWrap(true);     // Zeilenumbruch automatisch an
display.setTextWrap(false);    // Zeilenumbruch automatisch aus
display.print("hi");           // Text ausgeben
display.println(123);          // Text/Zahl ausgeben + Zeilenumbruch
display.drawChar(x,y,c,SSD1306_WHITE,SSD1306_BLACK,s);// Einzelnes Zeichen zeichnen
display.cp437(true);           // CP437-Zeichensatz korrekt aktivieren
display.write(v);              // Einzelnes Zeichen/Byte ausgeben

// bitmap
display.drawBitmap(x,y,bmp,w,h,SSD1306_WHITE); // Bitmap/Icon zeichnen
display.fillScreen(SSD1306_BLACK);             // Bildschirm komplett schwarz füllen
display.fillScreen(SSD1306_WHITE);             // Bildschirm komplett weiß füllen

// effekte
display.invertDisplay(true);   // Farben invertieren: an
display.invertDisplay(false);  // Farben invertieren: aus
display.dim(true);             // Display dimmen: an
display.dim(false);            // Display dimmen: aus

// scroll
display.startscrollright(a,b);     // Nach rechts scrollen (Zeilenbereich a..b)
display.startscrollleft(a,b);      // Nach links scrollen (Zeilenbereich a..b)
display.startscrolldiagright(a,b); // Diagonal nach rechts scrollen
display.startscrolldiagleft(a,b);  // Diagonal nach links scrollen
display.stopscroll();              // Scrollen stoppen
