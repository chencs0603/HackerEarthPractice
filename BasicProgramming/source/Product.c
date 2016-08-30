#include <stdio.h>
#include "Product.h"

//¼ÆËã³Ë»ý
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

//¼ÆËã½×³Ë
bool computeFactorial(int num, int* pnFactorial)
{

	bool bRet;
	int nFactorial;

	if (NULL == pnFactorial || 0 > num || 10 < num)
	{
		return false;
	}

	if (1 == num)
	{
		*pnFactorial = 1;
		return true;
	}
	else
	{
		bRet = false;
		nFactorial = 0;

		bRet = computeFactorial(num - 1, &nFactorial);
		if (bRet)
		{
			*pnFactorial = num * nFactorial;
			return true;
		}
		else
		{
			return false;
		}
	}
}