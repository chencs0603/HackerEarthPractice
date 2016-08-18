#ifndef _PALINDROMICSTRING_H
#define _PALINDROMICSTRING_H


#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//判断是否含有大写字母
bool hasUpperCase(char* pszBuf, int nBufLen);
//是否为回文字符串
bool isPalindromicStr(char* pszBufLen, int nBufLen);

#ifdef  __cplusplus
}
#endif

#endif