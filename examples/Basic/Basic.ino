#include <Arduino.h>
#include <Wire.h>
#include "LiquidCrystal_I2C.h"
#include "DFRobotDFPlayerMini.h"
#include <SoftwareSerial.h>

int int_sokhach;
int int_checkin;
SoftwareSerial mySoftwareSerial(2, 3); // RX, TX
LiquidCrystal_I2C lcd(0x27, 16, 2);
DFRobotDFPlayerMini myDFPlayer;

void setup()
{
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  mySoftwareSerial.begin(9600);
  if (!myDFPlayer.begin(mySoftwareSerial))
  {
    Serial.println("Failed to Start DFPlayer Mini");
  }
  myDFPlayer.setTimeOut(500);
}

void loop()
{
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Capacity");
  lcd.setCursor(9, 0);
  lcd.print("CheckIn");
  lcd.setCursor(0, 1);
  lcd.print(String(int_sokhach) + String("/40  "));
  lcd.setCursor(9, 1);
  lcd.print(int_checkin);

  if (digitalRead(10) == 0.000000)
  {
    while (!((digitalRead(11) == 0.000000) && (digitalRead(10) == 1.000000)))
    {
      delay(0);
    }
    // BYE
    myDFPlayer.playMp3Folder(2);
    if (int_sokhach > 0)
    {
      int_sokhach += -1;
    }
    while (!((digitalRead(10) == 1.000000) && (digitalRead(11) == 1.000000)))
    {
      delay(0);
    }
  }

  if (digitalRead(11) == 0.000000)
  {
    while (!((digitalRead(11) == 1.000000) && (digitalRead(10) == 0.000000)))
    {
      delay(0);
    }
    myDFPlayer.playMp3Folder(1);
    int_checkin += 1;
    int_sokhach += 1;
    while (!((digitalRead(10) == 1.000000) && (digitalRead(11) == 1.000000)))
    {
      delay(0);
    }
  }

  delay(0);
}
