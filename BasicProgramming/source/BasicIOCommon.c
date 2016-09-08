#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stdbool.h"
#include "BasicIOCommon.h"

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

//����˻�
bool computeProduct(int* pnBuf, int nBufLen, long* plProduct)
{	
	long lTmpProduct;
	int i;

	if (NULL == pnBuf || 0 >= nBufLen || 1000 < nBufLen)
	{
		return false;
	}


	lTmpProduct = 1;
	for (i = 0; i < nBufLen; i++)
	{
		if (1 <= pnBuf[i] && 1000 >= pnBuf[i])
		{
			lTmpProduct = (lTmpProduct * pnBuf[i])% MAX_MODULUS;
		}
		else
		{
			return false;
		}		
	}

	*plProduct = lTmpProduct;
	return true;
}

//��������ĸ���
bool countDivisors(int nMin, int nMax, int nDivisor, int* pnCount)
{
	int nTmpCount;
	int i;

	if (NULL == pnCount || nMin > nMax || 0 > nMin || 1000 < nMin || 0 > nMax || 1000 < nMax || 0 > nDivisor || 1000 < nDivisor)
	{
		return false;
	}

	nTmpCount = 0;
	for (i = nMin; i <= nMax; i++)
	{
		if (0 == i%nDivisor)
		{
			nTmpCount++;
		}
	}

	*pnCount = nTmpCount;
	return true;
}

//��֤ͼƬ�ߴ��Ƿ�Ϸ�
bool verifyPictureSize( int nSquareLen, int nWidthBuf, int nHeightBuf, char* pszRet, int* pnRetLen )
{
	int nTmpLen;
	char* pszRet1 = "UPLOAD ANOTHER";
	char* pszRet2 = "ACCEPTED";
	char* pszRet3 = "CROP IT";

	if (1 > nSquareLen || 10000 < nSquareLen  ||
		1 > nWidthBuf || 10000 < nWidthBuf || 
		1 > nHeightBuf || 10000 < nHeightBuf)
	{
		return false;
	}


	if (nWidthBuf < nSquareLen || nHeightBuf < nSquareLen)
	{
		nTmpLen = strlen(pszRet1);
		if (nTmpLen >= *pnRetLen)
		{
			return false;
		}

		strcpy(pszRet, pszRet1);
		*pnRetLen = nTmpLen;

	}
	else
	{
		if (nWidthBuf == nHeightBuf)
		{
			nTmpLen = strlen(pszRet2);
			if (nTmpLen >= *pnRetLen)
			{
				return false;
			}

			strcpy(pszRet, pszRet2);
			*pnRetLen = nTmpLen;
		}
		else
		{
			nTmpLen = strlen(pszRet3);
			if (nTmpLen >= *pnRetLen)
			{
				return false;
			}

			strcpy(pszRet, pszRet3);
			*pnRetLen = nTmpLen;
		}

	}

	return true;
}

//����׳�
bool computeFactorial(int num, int* pnFactorial)
{

	bool bRet;
	int nFactorial;

	if (NULL == pnFactorial || 0 > num || 10 < num)
	{
		return false;
	}

	if (1 == num)
	{
		*pnFactorial = 1;
		return true;
	}
	else
	{
		bRet = false;
		nFactorial = 0;

		bRet = computeFactorial(num - 1, &nFactorial);
		if (bRet)
		{
			*pnFactorial = num * nFactorial;
			return true;
		}
		else
		{
			return false;
		}
	}
}