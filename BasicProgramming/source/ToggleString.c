#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//判断是否为大写字母
bool isUpperCase(char ch)
{
	if (ch <= 'Z' && ch >= 'A')
	{
		return true;
	}
	else
	{
		return false;
	}
}

//判断是否为小写字母
bool isLowerCase(char ch)
{
	if (ch <= 'z' && ch >= 'a')
	{
		return true;
	}
	else
	{
		return false;
	}
}

//转换字符，若为字母，大小写互转，若不为字母，不进行转换
bool toggleChar(char cOriginal, char* pcToggle)
{
	if (isLowerCase(cOriginal))
	{
		*pcToggle = cOriginal - 0x20;
	}
	else if (isUpperCase(cOriginal))
	{
		*pcToggle = cOriginal + 0x20;
	}
	else
	{
		*pcToggle = cOriginal;
	}
	return true;
}

//转换字符串
bool toggleStr(char* pszBuf, int nBufLen, char* pszToggle, int* pnToggleLen)
{

	char cToggle;
	int i;

	//检测输入参数的合法性
	if (NULL == pszBuf || 0 >= nBufLen)
	{
		return false;
	}

	//获取输出数据的长度
	if (NULL == pszToggle)
	{
		*pnToggleLen = nBufLen;
		return true;
	}
	//遍历字符串，反转每个字母
	for (i = 0; i < nBufLen; i++)
	{
		if (toggleChar(pszBuf[i], &cToggle))
		{
			pszToggle[i] = cToggle;
		}else{
			return false;
		}
	}

	*pnToggleLen = nBufLen;
	return true;	
}