#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//�ж��Ƿ�Ϊ��д��ĸ
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

//�ж��Ƿ�ΪСд��ĸ
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

//ת���ַ�����Ϊ��ĸ����Сд��ת������Ϊ��ĸ��������ת��
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

//ת���ַ���
bool toggleStr(char* pszBuf, int nBufLen, char* pszToggle, int* pnToggleLen)
{

	char cToggle;
	int i;

	//�����������ĺϷ���
	if (NULL == pszBuf || 0 >= nBufLen)
	{
		return false;
	}

	//��ȡ������ݵĳ���
	if (NULL == pszToggle)
	{
		*pnToggleLen = nBufLen;
		return true;
	}
	//�����ַ�������תÿ����ĸ
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