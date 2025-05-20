#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3D ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#include "FontMaker.h"
void setpx(int16_t x,int16_t y,uint16_t color)
{
  display.drawPixel(x,y,color); //Thay đổi hàm này thành hàm vẽ pixel mà thư viện led bạn dùng cung cấp
}
MakeFont myfont(&setpx);

void setup() 
{
  Serial.begin(9600);
  delay(10);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  Serial.println(F("SSD1306 ok"));

  // Clear the buffer
  display.clearDisplay();

  myfont.set_font(MakeFont_Font1);
  myfont.print(0,0,"Xin chào các bạn !",SSD1306_WHITE,SSD1306_BLACK);
  myfont.print_noBackColor(0,20,"FontMaker",SSD1306_WHITE);
  
  int textLength = myfont.getLength("Căn giữa"); //tính toán độ dài của dòng chữ
  Serial.println("Length: " + String(textLength) + " pixel");

  myfont.print_noBackColor((128-textLength)/2,40,"Căn giữa",SSD1306_WHITE); //căn giữa dòng này
  
  display.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
