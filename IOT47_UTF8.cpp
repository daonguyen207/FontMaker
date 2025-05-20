/*
  IOT47_UTF8.cpp - Thư viện giải mã UTF8 (v2)
  Created by Dao Nguyen - IOT47.com
  Liên hệ: daonguyen20798@gmail.com
  Không sửa file này
*/
#include "IOT47_UTF8.h"
//-------------------------------------Chương trình xử lí UTF-8---------------------------//
const uint32_t PROGMEM UTF8_table[] =
{
/*add_here1*/


//data_add_xxx
};
uint16_t UTF8_GetAddr(unsigned char *utf8_char,unsigned char *char_offset)
{
 uint32_t utf8_value=0x00000000;
 unsigned char temp = 0xF0 & (*utf8_char);
 *char_offset=1;
  if((*utf8_char)<128) //nếu đây là kí tự trong bảng ascii
    utf8_value = *utf8_char;
  else if(temp == 0xC0) //loại utf-8 2 byte
  {
    *char_offset=2;
    utf8_value= (uint32_t)(*utf8_char) << 8;
    utf8_value|=(uint32_t)(*(utf8_char+1));
    #ifdef arduinoIDE
      utf8_value&=0x0000FFFF;
    #endif  
  }
  else if(temp == 0xE0)    //loại utf-8 3 byte
  {
    *char_offset = 3;                  
    utf8_value= (uint32_t)(*utf8_char) << 16;     
    utf8_value|=(uint32_t)(*(utf8_char+1)) << 8;    
    utf8_value|=(uint32_t)(*(utf8_char+2));          
    #ifdef arduinoIDE
      utf8_value&=0x00FFFFFF;
    #endif  
  }
  else if(temp == 0xF0)    //loại utf-8 4 byte
  {
    *char_offset = 4;                  
    utf8_value= (uint32_t)(*utf8_char) << 24;     
    utf8_value|=(uint32_t)(*(utf8_char+1)) << 16;    
    utf8_value|=(uint32_t)(*(utf8_char+2)) << 8;   
    utf8_value|=(uint32_t)(*(utf8_char+3));       
  }
  else return '?';
  for(unsigned char i = 0; i < sizeof(UTF8_table)/4; i++)
  {
      #ifdef arduinoIDE
       if(utf8_value == pgm_read_dword(UTF8_table + i))
      #else
       if(utf8_value == UTF8_table[i])
      #endif    
                return i;
  }
  return '?';
}
//------------------------------------------------------------------------------------------------//
//endfile
