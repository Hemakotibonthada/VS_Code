#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7,8,9,10,11); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
void setup() { 
 lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
//lcd.print("Hemakoti");
}
void loop() { 
 lcd.print("Hello World..."); // Prints "Arduino" on the LCD 
 delay(1000); // 3 seconds delay 
 lcd.blink();
 lcd.setCursor(2,1); // Sets the location at which subsequent text written to the LCD will be displayed 
 lcd.print("I'm Hemakoti_Bonthada"); 
 delay(1000);
lcd.clear();
//lcd.blink ();
}
