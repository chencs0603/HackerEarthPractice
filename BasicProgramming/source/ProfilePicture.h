#ifndef _PROFILEPICTURE_H
#define _PROFILEPICTURE_H

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//ÑéÖ¤Í¼Æ¬µÄ³ß´ç
bool verifyPictureSize(int nSquareLen, int nWidthBuf, int nHeightBuf, char* pszRet, int* pnRetLen);

#ifdef  __cplusplus
}
#endif

#endif