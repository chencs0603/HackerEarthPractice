#ifndef _PRODUCT_H
#define _PRODUCT_H

#define MAX_MODULUS 1000000007

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//����˻�
bool computeProduct(int* pnBuf, int nBufLen, long* plProduct);
//����׳�
bool computeFactorial(int num, int* pnFactorial);

#ifdef  __cplusplus
}
#endif

#endif