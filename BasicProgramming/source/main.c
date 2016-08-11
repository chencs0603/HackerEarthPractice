#include <stdio.h>
#include "ToggleString.h"

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

	pArray = (int*)malloc(size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &pArray[i]);//不能换行
	}

	for (i = 0; i < size; i++)
	{
		printf("%d\n", pArray[i] - 1);
	}
}

int main()
{
	//ToggleStringTest();
	
	DeathTest();

	return 0;
}