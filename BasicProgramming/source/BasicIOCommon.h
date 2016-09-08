#ifndef _BASICIOCOMMON_H
#define _BASICIOCOMMON_H

//C风格字符串以'\0'为结束符
#define MAX_BUF_LEN (100 + 1)

#define MAX_MODULUS 1000000007

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
//判断是否含有大写字母
bool hasUpperCase(char* pszBuf, int nBufLen);
//是否为回文字符串
bool isPalindromicStr(char* pszBufLen, int nBufLen);
//计算乘积
bool computeProduct(int* pnBuf, int nBufLen, long* plProduct);
//计算除数的个数
bool countDivisors(int nMin, int nMax, int nDivisor, int* pnCount);
//验证图片的尺寸
bool verifyPictureSize(int nSquareLen, int nWidthBuf, int nHeightBuf, char* pszRet, int* pnRetLen);
//计算阶乘
bool computeFactorial(int num, int* pnFactorial);

#ifdef  __cplusplus
}
#endif

#endif