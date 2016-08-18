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
	bool bRet;
	char pszBuf[MAX_BUF_LEN];
	int  nBufLen;
	char pszToggle[MAX_BUF_LEN];
	int  nToggleLen;

	
	//��ȡ�����ַ���
	nBufLen = MAX_BUF_LEN;
	memset(pszBuf, 0x00, nBufLen);
	scanf("%s", pszBuf);
	nBufLen = strlen(pszBuf);
	//��ʼ������
	nToggleLen = MAX_BUF_LEN;
	memset(pszToggle, 0x00, nToggleLen);

	bRet = false;
	bRet = toggleStr(pszBuf, nBufLen, pszToggle, &nToggleLen);
	if (bRet)
	{
		printf("%s\n", pszToggle);
	}
	else{
		printf("error!!!");
	}
}

//Death, the Multiverse and Nothing
//ע�����ﻻ�����ﲻ����
void DeathTest()
{
	int* pnBuf;
	int nBufLen;
	int i;

	nBufLen = 0x00;
	scanf("%d\n", &nBufLen);
	//malloc������������ֽ���������Ԫ�ظ���
	pnBuf = (int*)malloc(sizeof(int)*nBufLen);
	for (i = 0; i < nBufLen; i++)
	{
		scanf("%d", &pnBuf[i]);//���ܻ���
	}

	for (i = 0; i < nBufLen; i++)
	{
		printf("%d\n", pnBuf[i] - 1);
	}

	if (NULL != pnBuf)
	{
		free(pnBuf);
		pnBuf = NULL;
	}
}

//���Ի����ַ���
void PalindromicStrTest()
{
	bool bRet;
	char pszBuf[MAX_BUF_LEN];
	int nBufLen;

	nBufLen = MAX_BUF_LEN;
	memset(pszBuf, 0x00, nBufLen);
	scanf("%s", pszBuf);
	nBufLen = strlen(pszBuf);
	
	bRet = false;
	bRet = isPalindromicStr(pszBuf, nBufLen);

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

	//ProductTest();

	return 0;
}