/*
  MyFontMaker.h - Thư viện Font tương thích utf-8 (v2)
  Created by Dao Nguyen - IOT47.com
  Liên hệ: daonguyen20798@gmail.com
  Không sửa file này
*/
#ifndef __MY_FontMaker_h___
#define __MY_FontMaker_h___

#include "Arduino.h"

typedef struct 
{
  const uint8_t  *f_name;
  const uint16_t *f_map;
}MyFont_typedef;

//Khai báo extern các loại font mà bạn sử dụng

extern const MyFont_typedef MakeFont_Font1;
extern const MyFont_typedef Gothic;
extern const MyFont_typedef Gothic8;
extern const MyFont_typedef TimeNewRoMan10;
extern const MyFont_typedef TimeNewRoMan12;
extern const MyFont_typedef TimeNewRoMan11;
extern const MyFont_typedef Verdana10;
extern const MyFont_typedef Verdana11;
extern const MyFont_typedef _Verdana11;
extern const MyFont_typedef _Verdana10;
extern const MyFont_typedef Verdana8;
extern const MyFont_typedef MsGoThic8;
extern const MyFont_typedef MsGoThic9;
extern const MyFont_typedef MsGoThic10;
extern const MyFont_typedef Tahoma8;
extern const MyFont_typedef MsGothic6;
extern const MyFont_typedef MsPGothic7;
extern const MyFont_typedef SimSun8;
extern const MyFont_typedef Verdana9;
extern const MyFont_typedef Verdana7;
extern const MyFont_typedef TimeNewRoMan_9_space2;
extern const MyFont_typedef TimeNewRomanx1;
extern const MyFont_typedef TimeNewRomanx2;
extern const MyFont_typedef Tahoma1;
extern const MyFont_typedef F18;
extern const MyFont_typedef F16;
extern const MyFont_typedef TimeNewRoMan18;
extern const MyFont_typedef f_to_vai;
extern const MyFont_typedef f_26;
extern const MyFont_typedef f_22;
extern const MyFont_typedef h_to1;
extern const MyFont_typedef h_to2;
extern const MyFont_typedef h_to3;
extern const MyFont_typedef h_f_20;
extern const MyFont_typedef SimSun1;
extern const MyFont_typedef Tahoma12;
extern const MyFont_typedef Tahoma16;
//auto add here




#endif //__MY_FontMaker_h___
//---------------------------------------------------------------------Kết thúc file ----------------------------------------------//
