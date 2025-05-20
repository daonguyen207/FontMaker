/*
  FontMaker.h - Thư viện Font tương thích utf-8
  Created by Dao Nguyen - IOT47.com
  Liên hệ: daonguyen20798@gmail.com
  Người dùng toàn quyền sử dụng cho mục đích cá nhân
*/
#ifndef __FontMaker_h___
#define __FontMaker_h___

#include "IOT47_UTF8.h"
#include "MyFontMaker.h"

typedef void (*set_px_typedef)(int16_t x,int16_t y,uint16_t color);  
typedef void (*set_px2_typedef)(int16_t x,int16_t y,uint8_t cR,uint8_t cG,uint8_t cB); 
class MakeFont
{
    public:     
   	unsigned char read(int16_t x, int16_t y,  uint16_t txt);
   	unsigned char putChar(int16_t x,int16_t y,uint16_t txt,uint16_t color,uint16_t backcolor);
    unsigned char putChar_noBackColor(int16_t x,int16_t y,uint16_t txt,uint16_t color);
    unsigned char getCharLength(uint16_t txt);
   	void print(int16_t x,int16_t y,unsigned char *s,uint16_t color,uint16_t backcolor);
   	void print(int16_t x,int16_t y,char *s,uint16_t color,uint16_t backcolor);
    void print(int16_t x,int16_t y,String str,uint16_t color,uint16_t backcolor);
    uint16_t getLength(unsigned char *s);
    uint16_t getLength(char *s);
    uint16_t getLength(String str);
    void print_noBackColor(int16_t x,int16_t y,unsigned char *s,uint16_t color);
    void print_noBackColor(int16_t x,int16_t y,char *s,uint16_t color);
    void print_noBackColor(int16_t x,int16_t y,String str,uint16_t color);
    void set_font(const MyFont_typedef myfont);

    unsigned char putChar(int16_t x,int16_t y,uint16_t txt,uint8_t cR,uint8_t cG,uint8_t cB,uint8_t cBR,uint8_t cBG,uint8_t cBB);
    void print(int16_t x,int16_t y,unsigned char *s,uint8_t cR,uint8_t cG,uint8_t cB,uint8_t cBR,uint8_t cBG,uint8_t cBB);
    void print(int16_t x,int16_t y,char *s,uint16_t color,uint8_t cR,uint8_t cG,uint8_t cB,uint8_t cBR,uint8_t cBG,uint8_t cBB);
    void print(int16_t x,int16_t y,String str,uint8_t cR,uint8_t cG,uint8_t cB,uint8_t cBR,uint8_t cBG,uint8_t cBB);
    unsigned char putChar_noBackColor(int16_t x,int16_t y,uint16_t txt,uint8_t cR,uint8_t cG,uint8_t cB);
    void print_noBackColor(int16_t x,int16_t y,unsigned char *s,uint8_t cR,uint8_t cG,uint8_t cB);
    void print_noBackColor(int16_t x,int16_t y,char *s,uint8_t cR,uint8_t cG,uint8_t cB);
    void print_noBackColor(int16_t x,int16_t y,String str,uint8_t cR,uint8_t cG,uint8_t cB);

   	MakeFont(set_px_typedef set_px);
    MakeFont(set_px2_typedef set_px);
   	private:
    set_px_typedef FontMaker_setpx;
    set_px2_typedef FontMaker_setpx2;
    const uint16_t *_f_map;
    const uint8_t  *_f_name;
};

#endif //__FontMaker_h___
