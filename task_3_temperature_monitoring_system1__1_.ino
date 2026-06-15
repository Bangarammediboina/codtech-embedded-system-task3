#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

// This matches Tinkercad's Adafruit I2C LCD setup (Address 0)
Adafruit_LiquidCrystal lcd(0);
const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  
  // Official Adafruit initialization commands
  lcd.begin(16, 2);      
  lcd.setBacklight(HIGH); // Turns on the backlight
  lcd.clear();
  
  // Welcome Text
  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor");
  lcd.setCursor(0, 1);
  lcd.print("Codtech Task 3");
  delay(3000);
  lcd.clear();
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;
  
  // Round to a whole number so the display stays stable
  int displayTemp = round(temperatureC);
  
  // Displaying on the Adafruit LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(displayTemp);
  lcd.print(" C        "); 
  
  lcd.setCursor(0, 1);
  lcd.print("Status: Working ");
  
  // Printing to Serial Monitor
  Serial.print("Current Temp: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  delay(1000);
}