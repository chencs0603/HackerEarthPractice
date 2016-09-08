#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BitManipulationCommon.h"

//����num�Ķ����Ʊ�ʾ��1�ĸ���
bool countBits(int num, int* pnBitCount)
{
	int count = 0;
	//����������ݵĺϷ���
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