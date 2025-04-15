/*
  IOT47_UTF8.h - Thư viện giải mã UTF-8
  Created by Dao Nguyen - IOT47.com
  Liên hệ: daonguyen20798@gmail.com
  Người dùng toàn quyền sử dụng cho mục đích cá nhân
*/
#ifndef _IOT47_UTF8__
#define _IOT47_UTF8__

#define arduinoIDE //nếu không xài arduino thì xóa dòng này đi nhé

#ifdef arduinoIDE
#include "Arduino.h"
#endif

extern const uint32_t PROGMEM UTF8_table[];
uint16_t UTF8_GetAddr(unsigned char *utf8_char,unsigned char *char_offset);

#endif //_IOT47_UTF8__
