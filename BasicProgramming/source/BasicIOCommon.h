#ifndef _BASICIOCOMMON_H
#define _BASICIOCOMMON_H

//C����ַ�����'\0'Ϊ������
#define MAX_BUF_LEN (100 + 1)

#define MAX_MODULUS 1000000007

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//�ж��Ƿ�Ϊ��д��ĸ
bool isUpperCase(char ch);
//�ж��Ƿ�ΪСд��ĸ
bool isLowerCase(char ch);
//ת���ַ�����Ϊ��ĸ����Сд��ת������Ϊ��ĸ��������ת��
bool toggleChar(char cOriginal, char* pcToggle);
//ת���ַ���
bool toggleStr(char* pszBuf, int nBufLen, char* pszToggle, int* pnToggleLen);
//�ж��Ƿ��д�д��ĸ
bool hasUpperCase(char* pszBuf, int nBufLen);
//�Ƿ�Ϊ�����ַ���
bool isPalindromicStr(char* pszBufLen, int nBufLen);
//����˻�
bool computeProduct(int* pnBuf, int nBufLen, long* plProduct);
//��������ĸ���
bool countDivisors(int nMin, int nMax, int nDivisor, int* pnCount);
//��֤ͼƬ�ĳߴ�
bool verifyPictureSize(int nSquareLen, int nWidthBuf, int nHeightBuf, char* pszRet, int* pnRetLen);
//����׳�
bool computeFactorial(int num, int* pnFactorial);

#ifdef  __cplusplus
}
#endif

#endif