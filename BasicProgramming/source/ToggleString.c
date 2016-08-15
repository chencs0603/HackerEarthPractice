#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//判断是否为大写字母
bool isUpperCase(char character)
{
	if (character <= 'Z' && character >= 'A')
	{
		return true;
	}
	else
	{
		return false;
	}
}
//判断是否为小写字母
bool isLowerCase(char character)
{
	if (character <= 'z' && character >= 'a')
	{
		return true;
	}
	else
	{
		return false;
	}
}
//转换字符，若为字母，大小写互转，若不为字母，不进行转换
bool toggleChar(char originalChar, char* pRetChar)
{
	if (isLowerCase(originalChar))
	{
		*pRetChar = originalChar - 0x20;
	}
	else if (isUpperCase(originalChar))
	{
		*pRetChar = originalChar + 0x20;
	}
	else
	{
		*pRetChar = originalChar;
	}
	return true;
}
//转换字符串
bool toggleStr(char* pOriginalStr, int originalStrLen, char* pRetStr, int* pRetStrLen)
{

	char retChar;
	int i;

	//检测输入参数的合法性
	if (NULL == pOriginalStr || 0 >= originalStrLen)
	{
		return false;
	}

	//获取输出数据的长度
	if (NULL == pRetStr)
	{
		*pRetStrLen = originalStrLen;
		return true;
	}
	//遍历字符串，反转每个字母
	for (i = 0; i < originalStrLen; i++)
	{
		if (toggleChar(pOriginalStr[i], &retChar))
		{
			pRetStr[i] = retChar;
		}else{
			return false;
		}
	}

	*pRetStrLen = originalStrLen;
	return true;	
}