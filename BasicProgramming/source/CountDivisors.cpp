#include <stdio.h>
#include "CountDivisors.h"

//计算除数的个数
bool countDivisors(int nMin, int nMax, int nDivisor, int* pnCount)
{
	int nTmpCount;
	int i;

	if (NULL == pnCount || nMin > nMax || 0 > nMin || 1000 < nMin || 0 > nMax || 1000 < nMax || 0 > nDivisor || 1000 < nDivisor)
	{
		return false;
	}

	nTmpCount = 0;
	for (i = nMin; i <= nMax; i++)
	{
		if (0 == i%nDivisor)
		{
			nTmpCount++;
		}
	}

	*pnCount = nTmpCount;
	return true;
}