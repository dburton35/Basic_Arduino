
int buttonPin = 12; 
int buttonState = 0;
int counter =0;
int previousbuttonState = 0;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);

 
void setup() {
	pinMode(buttonPin, INPUT);
	lcd.begin (12,2); 
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	lcd.print("Button Presses:"); 
	Serial.begin(9600);
}
 
void loop() {
	buttonState = digitalRead(buttonPin);
	lcd.setCursor(0, 1); 
  	//lcd.print(millis() 
 
  	if (buttonState == HIGH && previousbuttonState == LOW) 
  		counter +=1; 
  		lcd.print(counter); 
  	}
    {
  	previousbuttonState = buttonState;

 
  	Serial.print("");
  	Serial.println(counter); //Serial monitor prints the counter
  }