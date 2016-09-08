#ifndef _BITMANIPULATIONCOMMON_H
#define _BITMANIPULATIONCOMMON_H

#ifdef  __cplusplus  
extern "C" {
#endif
#include "stdbool.h"

//计算num的二进制表示中1的个数
bool countBits(int num, int* pnBitCount);


#ifdef  __cplusplus
}
#endif

#endif