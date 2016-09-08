#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BitManipulationCommon.h"

//计算num的二进制表示中1的个数
bool countBits(int num, int* pnBitCount)
{
	int count = 0;
	//检测输入数据的合法性
	if((1 > num) || (1000 < num) || (NULL == pnBitCount))
	{
		return false;
	}

	while(num)
	{
		num = num&(num-1);
		count++;
	}

	*pnBitCount = count;

	return true;
}