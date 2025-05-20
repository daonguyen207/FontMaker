/*
 Demo hiển thị font tiếng Việt, Nhật, Trung trên màn TFT sử dụng thư viện TFT_ST7735.h
 Thư viện MakeFont V2
 Chú ý: Save as code này ra chỗ khác rồi nạp
*/

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#define TFT_CS     10
#define TFT_RST    9  // you can also connect this to the Arduino reset
                       // in which case, set this #define pin to -1!
#define TFT_DC     8

// Color definitions
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define BLACK  0x0000

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);  //<---------------------Eric Says Use This!

#include "FontMaker.h"
void setpx(int16_t x,int16_t y,uint16_t color)
{
  tft.drawPixel(x,y,color); //Thay đổi hàm này thành hàm vẽ pixel mà thư viện led bạn dùng cung cấp
}
MakeFont myfont(&setpx);

void setup(void) 
{
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  
    myfont.set_font(MakeFont_Font1);
    myfont.print(0,0,"Xin chào các bạn !",RED,BLACK);

    int textLength = myfont.getLength("Căn giữa"); //tính toán độ dài của dòng chữ
    Serial.println("Length: " + String(textLength) + " pixel");

    myfont.print_noBackColor((128-textLength)/2,40,"Căn giữa",RED); //căn giữa dòng này
}
void loop() 
{

}

