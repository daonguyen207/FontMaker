/*
 Demo hiển thị font tiếng Việt, Nhật, Trung trên màn TFT sử dụng thư viện TFT_ST7735.h
 Thư viện MakeFont V2
 Chú ý: Save as code này ra chỗ khác rồi nạp
*/

#include <SPI.h>
#include <TFT_ST7735.h>

#define __CS  10
#define __DC  9
#define __RST 8
// Color definitions
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define BLACK  0x0000

TFT_ST7735 tft = TFT_ST7735(__CS, __DC, __RST);

#include "FontMaker.h"
void setpx(int16_t x,int16_t y,uint16_t color)
{
  tft.drawPixel(x,y,color); //Thay đổi hàm này thành hàm vẽ pixel mà thư viện led bạn dùng cung cấp
}
MakeFont myfont(&setpx);
String txt = "Xin chào";
void setup(void) 
{
  tft.begin();
  
    myfont.set_font(MakeFont_Font1);
    myfont.print_noBackColor(0,0,txt,RED);
    myfont.print_noBackColor(0,2,txt,GREEN);
}
void loop() 
{

}

