#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ToggleString.h"
#include "PalindromicString.h"


//������ĸ��ת
void ToggleStringTest()
{
	//�������
	char inputStr[MAX_STR_LEN];
	int  inputStrLen;
	char outputStr[MAX_STR_LEN];
	int  outputStrLen;
	bool bRet = false;
	//��ȡ�����ַ���
	scanf("%s", inputStr);
	inputStrLen = strlen(inputStr);
	//��ʼ������
	memset(outputStr, 0x00, MAX_STR_LEN);
	outputStrLen = inputStrLen;

	bRet = toggleStr(inputStr, inputStrLen, outputStr, &outputStrLen);
	if (bRet)
	{
		printf("%s\n", outputStr);
	}
	else{
		printf("error!!!");
	}
}
//Death, the Multiverse and Nothing
//ע�����ﻻ�����ﲻ����
void DeathTest()
{
	int size = 0; 
	int i = 0;
	int* pArray = NULL;

	scanf("%d\n", &size);

	pArray = (int*)malloc(sizeof(int)*size);//malloc������������ֽ���������Ԫ�ظ���
	for (i = 0; i < size; i++)
	{
		scanf("%d", &pArray[i]);//���ܻ���
	}

	for (i = 0; i < size; i++)
	{
		printf("%d\n", pArray[i] - 1);
	}

	if (NULL != pArray)
	{
		free(pArray);
		pArray = NULL;
	}
}
//���Ի����ַ���
void PalindromicStrTest()
{
	bool bRet = false;
	int size = 0;
	char str[100];

	scanf("%s", str);

	size = strlen(str);

	bRet = isPalindromicStr(str, size);

	if (bRet)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
//���Գ˻�
void ProductTest()
{
	bool bRet;
	long lProduct;
	int* pnBuf;
	int nBufLen; 
	int i;
	
	nBufLen = 0;
	pnBuf = NULL;

	scanf("%d\n", &nBufLen);
	pnBuf = (int*)malloc(sizeof(int)*nBufLen);//malloc������������ֽ���������Ԫ�ظ���

	for (i = 0; i < nBufLen; i++)
	{
		scanf("%d", &pnBuf[i]);//���ܻ���
	}

	bRet = false;
	bRet = computeProduct(pnBuf, nBufLen, &lProduct);
	if (bRet)
	{
		printf("%d\n", lProduct);
	}
	else
	{
		printf("error!!!");
	}
	
	
}

int main()
{
	//ToggleStringTest();
	
	//DeathTest();

	//PalindromicStrTest();

	ProductTest();

	return 0;
}