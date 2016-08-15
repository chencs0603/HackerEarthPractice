#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//判断是否含有大写字母
bool hasUpperCase(char* pStr, int strLen)
{
	int i;
	if (NULL == pStr || 0 >= strLen)
	{
		return false;
	}

	for (i = 0; i < strLen; i++)
	{
		if (isUpperCase(pStr[i]))
		{
			return true;
		}
	}
	return false;
}
//是否为回文字符串
bool isPalindromicStr(char* pStr, int strLen)
{
	char* pFront = pStr;
	char* pBack = pStr + (strLen - 1);
	int i = 0;
	//检测输入参数的合法性
	if (NULL == pStr || 0 >= strLen)
	{
		return false;
	}
	//判断是否全为小写字母
	if (hasUpperCase(pStr, strLen))
	{
		return false;
	}
	//两头堵模型判断是否为回文字符串
	for (i = 0; i < strLen/2; i++)
	{
		if (*pFront != *pBack)
		{
			return false;
		}
		pFront++;
		pBack--;
	}

	return true;
}