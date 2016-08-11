#ifndef _TOGGLESTRING_H
#define _TOGGLESTRING_H

#define MAX_STR_LEN 100

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//判断是否为大写字母
bool isUpperCase(char character);
//判断是否为小写字母
bool isLowerCase(char character);
//转换字符，若为字母，大小写互转，若不为字母，不进行转换
bool toggleChar(char originalChar, char* pRetChar);
//转换字符串
bool toggleStr(char* pOriginalStr, int originalStrLen, char* pRetStr, int* pRetStrLen);

#ifdef  __cplusplus
}
#endif

#endif