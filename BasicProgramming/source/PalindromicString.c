#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//�ж��Ƿ��д�д��ĸ
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
//�Ƿ�Ϊ�����ַ���
bool isPalindromicStr(char* pStr, int strLen)
{
	char* pFront = pStr;
	char* pBack = pStr + (strLen - 1);
	int i = 0;
	//�����������ĺϷ���
	if (NULL == pStr || 0 >= strLen)
	{
		return false;
	}
	//�ж��Ƿ�ȫΪСд��ĸ
	if (hasUpperCase(pStr, strLen))
	{
		return false;
	}
	//��ͷ��ģ���ж��Ƿ�Ϊ�����ַ���
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