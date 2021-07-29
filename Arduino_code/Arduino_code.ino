#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

float AMP;
void setup() {
  lcd.begin (16,2);
  lcd.setCursor(0,0);
}
void loop() {
int ADC0 = analogRead(A0);
AMP = ADC0*4.88;
lcd.print("Current is: ");
lcd.setCursor(0,1);
lcd.print(AMP);
lcd.print("mA");
lcd.setCursor(0,0);
}
