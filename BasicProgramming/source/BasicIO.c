#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "stdbool.h"
#include "BasicIOCommon.h"

//Toggle String:测试字母反转
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
void DeathTest()
{
	int* pnBuf;
	int nBufLen;
	int i;

	nBufLen = 0x00;
	scanf("%d\n", &nBufLen);//注意哪里换行哪里不换行

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

//Palindromic String:测试回文字符串
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
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

//Find Product:测试乘积
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
		printf("error!!!\n");
	}	
}

//Count Divisors:测试计算除数的个数
void CountDivisorsTest()
{
	bool bRet;
	int nMin, nMax, nDivisors;
	int nCount;

	scanf("%d %d %d", &nMin, &nMax, &nDivisors);

	bRet = false;
	bRet = countDivisors(nMin, nMax, nDivisors, &nCount);
	if (bRet)
	{
		printf("%d\n", nCount);
	}
	else
	{
		printf("error!!!\n");
	}
}

//Roy and Profile Picture:验证图片尺寸是否合法
void VerifyPictureSizeTest()
{
	bool bRet;
	int nSquare;
	int nPhotoNum;
	int* pnWidthBuf;
	int* pnHeightBuf;
	int i;
	char szRet[0x10];
	int nRetLen;

	scanf("%d\n", &nSquare);
	scanf("%d\n", &nPhotoNum);

	pnWidthBuf = (int*)malloc(sizeof(int)*nPhotoNum);
	pnHeightBuf = (int*)malloc(sizeof(int)*nPhotoNum);

	if (NULL == pnHeightBuf || NULL == pnWidthBuf)
	{
		return;
	}

	for (i = 0; i < nPhotoNum; i++)
	{
		scanf("%d %d", &pnWidthBuf[i], &pnHeightBuf[i]);
	}

	for (i = 0; i < nPhotoNum; i++)
	{
		memset(szRet, 0x00, 0x10);
		nRetLen = 0x10;
		bRet = false;
		bRet = verifyPictureSize(nSquare, pnWidthBuf[i], pnHeightBuf[i], szRet, &nRetLen);
		if (bRet)
		{
			printf("%s\n", szRet);
		} 
		else
		{
			printf("error!!!\n");
		}
		
	}
}

//Factorial!:测试阶乘
void FactorialTest()
{
	bool bRet;
	int num;
	int nFactorial; 

	scanf("%d", &num);

	nFactorial = 0;
	bRet = false;
	bRet = computeFactorial(num, &nFactorial);
	if (bRet)
	{
		printf("%d\n", nFactorial);
	}
	else
	{
		printf("error!!!\n");
	}	
}

//Life, the Universe, and Everything
void BruteForce()
{
	int num;
	int target = 42;

	while(1)
	{
		scanf("%d", &num);
		if (num != target && num <= 1000 && num > 0)
		{
			printf("%d\n", num);
		}
		else
		{
			break;
		}
	}
}

void BruteForceTest()
{
	int pnBuf[10000];
	int i, j;

	int target = 42;

	i = -1;
	do 
	{
		i++;
		scanf("%d", &pnBuf[i]);
	} while (pnBuf[i] != target && pnBuf[i] <= 1000 && pnBuf[i] > 0);

	for (j = 0; j < i; j++)
	{
		printf("%d\n", pnBuf[j]);
	}
}