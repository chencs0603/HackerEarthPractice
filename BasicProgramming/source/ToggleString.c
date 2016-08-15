#include <stdio.h>
#include "stdbool.h"
#include "ToggleString.h"

//�ж��Ƿ�Ϊ��д��ĸ
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
//�ж��Ƿ�ΪСд��ĸ
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
//ת���ַ�����Ϊ��ĸ����Сд��ת������Ϊ��ĸ��������ת��
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
//ת���ַ���
bool toggleStr(char* pOriginalStr, int originalStrLen, char* pRetStr, int* pRetStrLen)
{

	char retChar;
	int i;

	//�����������ĺϷ���
	if (NULL == pOriginalStr || 0 >= originalStrLen)
	{
		return false;
	}

	//��ȡ������ݵĳ���
	if (NULL == pRetStr)
	{
		*pRetStrLen = originalStrLen;
		return true;
	}
	//�����ַ�������תÿ����ĸ
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