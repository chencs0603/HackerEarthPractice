#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BitManipulationCommon.h"
#include "BitManipulation.h"

//Count the bits
void CountBitsTest()
{
	int nSize;
	int* pnNum;
	int count;
	int i;
	bool bRet;
	//��ȡ��������
	nSize = 0;
	scanf("%d", &nSize);
	if (1 > nSize || 1000 < nSize)
	{
		return;
	}
	//ΪnSize��������ֵ
	pnNum = (int*)malloc(sizeof(int)*nSize);
	for (i = 0; i < nSize; i++)
	{
		scanf("%d", &pnNum[i]);
	}
	//Ϊÿ�����ݼ���1�ĸ���
	for (i = 0; i < nSize; i++)
	{
		count = 0;
		bRet = false;
		bRet = countBits(pnNum[i], &count);
		if (bRet)
		{
			printf("%d\n", count);
		}
		else
		{
			printf("error!!!\n");
		}
	}
}