#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//�ж��Ƿ��д�д��ĸ
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

//�Ƿ�Ϊ�����ַ���
bool isPalindromicStr(char* pszBuf, int nBufLen)
{
	char* pszFront = pszBuf;
	char* pszBack = pszBuf + (nBufLen - 1);
	int i;

	//�����������ĺϷ���
	if (NULL == pszBuf || 0 >= nBufLen)
	{
		return false;
	}
	//�ж��Ƿ�ȫΪСд��ĸ
	if (hasUpperCase(pszBuf, nBufLen))
	{
		return false;
	}
	//��ͷ��ģ���ж��Ƿ�Ϊ�����ַ���
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