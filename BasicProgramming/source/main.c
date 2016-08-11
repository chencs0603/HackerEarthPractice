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

int main()
{
	ToggleStringTest();
	
	return 0;
}