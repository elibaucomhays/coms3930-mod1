#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

String adjectives[26] = {"happy", "sad", "strong", "alive", "blue", "better", "average", "bright", "breakable", "concerned", "cruel", "defiant", "hungry", "fragile", "tired", "evil", "strong", "nervous", "puzzled", "brave", "capable", "resilient", "splendid", "wild", "weary", "wicked"};

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.setTextSize(2.5);
  tft.fillScreen(TFT_WHITE);
}

void loop() {
  tft.setTextSize(2.5);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK);
  delay(1000);

  tft.drawString("i ", 2, 0, 2);
  delay(50);    
  tft.drawString("am", 38, 0, 2);
  delay(1000);

  int chance = rand() % 26;
  tft.drawString(adjectives[chance], 2, 48, 2);
  delay(1500); 

  tft.drawString("who ", 0, 96, 2);
  delay(50);
  tft.drawString("are ", 60, 96, 2);
  delay(50);
  tft.drawString("you?", 119, 96, 2);
  delay(2000); 
}
