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
	char inputStr[MAX_STR_LEN];
	int  inputStrLen;
	char outputStr[MAX_STR_LEN];
	int  outputStrLen;
	bool bRet = false;
	//获取输入字符串
	scanf("%s", inputStr);
	inputStrLen = strlen(inputStr);
	//初始化参数
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
//注意哪里换行哪里不换行
void DeathTest()
{
	int size = 0; 
	int i = 0;
	int* pArray = NULL;

	scanf("%d\n", &size);

	pArray = (int*)malloc(sizeof(int)*size);//malloc的输入参数是字节数，不是元素个数
	for (i = 0; i < size; i++)
	{
		scanf("%d", &pArray[i]);//不能换行
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
//测试回文字符串
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

	ProductTest();

	return 0;
}