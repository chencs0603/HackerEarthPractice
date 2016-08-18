#ifndef _COUNTDIVISORS_H
#define _COUNTDIVISORS_H

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//计算除数的个数
bool countDivisors(int nMin, int nMax, int nDivisor, int* pnCount);

#ifdef  __cplusplus
}
#endif

#endif