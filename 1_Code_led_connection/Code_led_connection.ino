#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Adam Israil");
  lcd.setCursor(0,1);
  lcd.print("1234567890");
  
}
