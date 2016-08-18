#ifndef _TOGGLESTRING_H
#define _TOGGLESTRING_H
//C风格字符串以'\0'为结束符
#define MAX_BUF_LEN (100 + 1)

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//判断是否为大写字母
bool isUpperCase(char ch);
//判断是否为小写字母
bool isLowerCase(char ch);
//转换字符，若为字母，大小写互转，若不为字母，不进行转换
bool toggleChar(char cOriginal, char* pcToggle);
//转换字符串
bool toggleStr(char* pszBuf, int nBufLen, char* pszToggle, int* pnToggleLen);

#ifdef  __cplusplus
}
#endif

#endif