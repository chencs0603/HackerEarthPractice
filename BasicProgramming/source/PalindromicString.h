#ifndef _PALINDROMICSTRING_H
#define _TOGGLESTRING_H


#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//判断是否含有大写字母
bool hasUpperCase(char* pStr, int strLen);
//是否为回文字符串
bool isPalindromicStr(char* pStr, int strLen);

#ifdef  __cplusplus
}
#endif

#endif