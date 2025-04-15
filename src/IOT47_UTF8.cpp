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

0x00000020, // 
0x0000C380, //À
0x0000C381, //Á
0x00E1BAA2, //Ả
0x0000C383, //Ã
0x00E1BAA0, //Ạ
0x0000C482, //Ă
0x00E1BAB0, //Ằ
0x00E1BAAE, //Ắ
0x00E1BAB2, //Ẳ
0x00E1BAB4, //Ẵ
0x00E1BAB6, //Ặ
0x0000C382, //Â
0x00E1BAA6, //Ầ
0x00E1BAA4, //Ấ
0x00E1BAA8, //Ẩ
0x00E1BAAA, //Ẫ
0x00E1BAAC, //Ậ
0x0000C490, //Đ
0x0000C388, //È
0x0000C389, //É
0x00E1BABA, //Ẻ
0x00E1BABC, //Ẽ
0x00E1BAB8, //Ẹ
0x0000C38A, //Ê
0x00E1BB80, //Ề
0x00E1BABE, //Ế
0x00E1BB82, //Ể
0x00E1BB84, //Ễ
0x00E1BB86, //Ệ
0x0000C38C, //Ì
0x0000C38D, //Í
0x00000020, // 
0x00000021, //!
0x00000022, //"
0x00000023, //#
0x00000024, //$
0x00000025, //%
0x00000026, //&
0x00E28098, //‘
0x00000028, //(
0x00000029, //)
0x0000002A, //*
0x0000002B, //+
0x0000002C, //,
0x0000002D, //–
0x0000002E, //.
0x0000002F, ///
0x00000030, //0
0x00000031, //1
0x00000032, //2
0x00000033, //3
0x00000034, //4
0x00000035, //5
0x00000036, //6
0x00000037, //7
0x00000038, //8
0x00000039, //9
0x0000003A, //:
0x0000003B, //;
0x0000003C, //<
0x0000003D, //=
0x0000003E, //>
0x0000003F, //?
0x00000040, //@
0x00000041, //A
0x00000042, //B
0x00000043, //C
0x00000044, //D
0x00000045, //E
0x00000046, //F
0x00000047, //G
0x00000048, //H
0x00000049, //I
0x0000004A, //J
0x0000004B, //K
0x0000004C, //L
0x0000004D, //M
0x0000004E, //N
0x0000004F, //O
0x00000050, //P
0x00000051, //Q
0x00000052, //R
0x00000053, //S
0x00000054, //T
0x00000055, //U
0x00000056, //V
0x00000057, //W
0x00000058, //X
0x00000059, //Y
0x0000005A, //Z
0x0000005B, //[
0x0000005C, //
0x0000005D, //]
0x0000005E, //^
0x0000005F, //_
0x00000060, //`
0x00000061, //a
0x00000062, //b
0x00000063, //c
0x00000064, //d
0x00000065, //e
0x00000066, //f
0x00000067, //g
0x00000068, //h
0x00000069, //i
0x0000006A, //j
0x0000006B, //k
0x0000006C, //l
0x0000006D, //m
0x0000006E, //n
0x0000006F, //o
0x00000070, //p
0x00000071, //q
0x00000072, //r
0x00000073, //s
0x00000074, //t
0x00000075, //u
0x00000076, //v
0x00000077, //w
0x00000078, //x
0x00000079, //y
0x0000007A, //z
0x0000007B, //{
0x0000007C, //|
0x0000007D, //}
0x0000007E, //~
0x00E1BB88, //Ỉ
0x0000C4A8, //Ĩ
0x00E1BB8A, //Ị
0x0000C392, //Ò
0x0000C393, //Ó
0x00E1BB8E, //Ỏ
0x0000C395, //Õ
0x00E1BB8C, //Ọ
0x0000C394, //Ô
0x00E1BB92, //Ồ
0x00E1BB90, //Ố
0x00E1BB94, //Ổ
0x00E1BB96, //Ỗ
0x00E1BB98, //Ộ
0x0000C6A0, //Ơ
0x00E1BB9C, //Ờ
0x00E1BB9A, //Ớ
0x00E1BB9E, //Ở
0x00E1BBA0, //Ỡ
0x00E1BBA2, //Ợ
0x0000C399, //Ù
0x0000C39A, //Ú
0x00E1BBA6, //Ủ
0x0000C5A8, //Ũ
0x00E1BBA4, //Ụ
0x0000C6AF, //Ư
0x00E1BBAA, //Ừ
0x00E1BBA8, //Ứ
0x00E1BBAC, //Ử
0x00E1BBAE, //Ữ
0x00E1BBB0, //Ự
0x00E1BBB2, //Ỳ
0x0000C39D, //Ý
0x00E1BBB6, //Ỷ
0x00E1BBB8, //Ỹ
0x00E1BBB4, //Ỵ
0x0000C3A0, //à
0x0000C3A1, //á
0x00E1BAA3, //ả
0x0000C3A3, //ã
0x00E1BAA1, //ạ
0x0000C483, //ă
0x00E1BAB1, //ằ
0x00E1BAAF, //ắ
0x00E1BAB3, //ẳ
0x00E1BAB5, //ẵ
0x00E1BAB7, //ặ
0x0000C3A2, //â
0x00E1BAA7, //ầ
0x00E1BAA5, //ấ
0x00E1BAA9, //ẩ
0x00E1BAAB, //ẫ
0x00E1BAAD, //ậ
0x0000C491, //đ
0x0000C3A8, //è
0x0000C3A9, //é
0x00E1BABB, //ẻ
0x00E1BABD, //ẽ
0x00E1BAB9, //ẹ
0x0000C3AA, //ê
0x00E1BB81, //ề
0x00E1BABF, //ế
0x00E1BB83, //ể
0x00E1BB85, //ễ
0x00E1BB87, //ệ
0x0000C3AC, //ì
0x0000C3AD, //í
0x00E1BB89, //ỉ
0x0000C4A9, //ĩ
0x00E1BB8B, //ị
0x0000C3B2, //ò
0x0000C3B3, //ó
0x00E1BB8F, //ỏ
0x0000C3B5, //õ
0x00E1BB8D, //ọ
0x0000C3B4, //ô
0x00E1BB93, //ồ
0x00E1BB91, //ố
0x00E1BB95, //ổ
0x00E1BB97, //ỗ
0x00E1BB99, //ộ
0x0000C6A1, //ơ
0x00E1BB9D, //ờ
0x00E1BB9B, //ớ
0x00E1BB9F, //ở
0x00E1BBA1, //ỡ
0x00E1BBA3, //ợ
0x0000C3B9, //ù
0x0000C3BA, //ú
0x00E1BBA7, //ủ
0x0000C5A9, //ũ
0x00E1BBA5, //ụ
0x0000C6B0, //ư
0x00E1BBAB, //ừ
0x00E1BBA9, //ứ
0x00E1BBAD, //ử
0x00E1BBAF, //ữ
0x00E1BBB1, //ự
0x00E1BBB3, //ỳ
0x0000C3BD, //ý
0x00E1BBB7, //ỷ
0x00E1BBB9, //ỹ
0x00E1BBB5, //ỵ
0x00E4BDA0, //你
0x00E5A5BD, //好
0x00E69C8B, //朋
0x00E58F8B, //友
0x00E29DA4, //❤
0x0000C2B0, //°

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
