#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ToggleString.h"
#include "PalindromicString.h"

//测试字母反转
void ToggleStringTest()
{
	//定义变量
	bool bRet;
	char pszBuf[MAX_BUF_LEN];
	int  nBufLen;
	char pszToggle[MAX_BUF_LEN];
	int  nToggleLen;

	
	//获取输入字符串
	nBufLen = MAX_BUF_LEN;
	memset(pszBuf, 0x00, nBufLen);
	scanf("%s", pszBuf);
	nBufLen = strlen(pszBuf);
	//初始化参数
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
//注意哪里换行哪里不换行
void DeathTest()
{
	int* pnBuf;
	int nBufLen;
	int i;

	nBufLen = 0x00;
	scanf("%d\n", &nBufLen);
	//malloc的输入参数是字节数，不是元素个数
	pnBuf = (int*)malloc(sizeof(int)*nBufLen);
	for (i = 0; i < nBufLen; i++)
	{
		scanf("%d", &pnBuf[i]);//不能换行
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

//测试回文字符串
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

//测试乘积
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
	pnBuf = (int*)malloc(sizeof(int)*nBufLen);//malloc的输入参数是字节数，不是元素个数

	for (i = 0; i < nBufLen; i++)
	{
		scanf("%d", &pnBuf[i]);//不能换行
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