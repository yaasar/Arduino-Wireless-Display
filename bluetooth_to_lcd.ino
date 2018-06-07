#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.begin();

  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    delay(100);
    lcd.clear();
    while (Serial.available() > 0)
    {
      lcd.write(Serial.read());

    }
  }
}
