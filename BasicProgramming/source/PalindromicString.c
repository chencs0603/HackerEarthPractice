#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//判断是否含有大写字母
bool hasUpperCase(char* pszBuf, int nBufLen)
{
	int i;
	if (NULL == pszBuf || 0 >= nBufLen)
	{
		return false;
	}

	for (i = 0; i < nBufLen; i++)
	{
		if (isUpperCase(pszBuf[i]))
		{
			return true;
		}
	}
	return false;
}

//是否为回文字符串
bool isPalindromicStr(char* pszBuf, int nBufLen)
{
	char* pszFront = pszBuf;
	char* pszBack = pszBuf + (nBufLen - 1);
	int i;

	//检测输入参数的合法性
	if (NULL == pszBuf || 0 >= nBufLen)
	{
		return false;
	}
	//判断是否全为小写字母
	if (hasUpperCase(pszBuf, nBufLen))
	{
		return false;
	}
	//两头堵模型判断是否为回文字符串
	for (i = 0; i < nBufLen/2; i++)
	{
		if (*pszFront != *pszBack)
		{
			return false;
		}
		pszFront++;
		pszBack--;
	}

	return true;
}