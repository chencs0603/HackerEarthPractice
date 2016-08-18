#include <stdio.h>
#include "Product.h"

//Çó³Ë»ý
bool computeProduct(int* pnBuf, int nBufLen, long* plProduct)
{	
	long lTmpProduct;
	int i;

	if (NULL == pnBuf || 0 >= nBufLen || 1000 < nBufLen)
	{
		return false;
	}
	

	lTmpProduct = 1;
	for (i = 0; i < nBufLen; i++)
	{
		if (1 <= pnBuf[i] && 1000 >= pnBuf[i])
		{
			lTmpProduct = (lTmpProduct * pnBuf[i])% MAX_MODULUS;
		}
		else
		{
			return false;
		}		
	}

	*plProduct = lTmpProduct;
	return true;
}