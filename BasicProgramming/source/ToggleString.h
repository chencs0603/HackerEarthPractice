#ifndef _TOGGLESTRING_H
#define _TOGGLESTRING_H
//C����ַ�����'\0'Ϊ������
#define MAX_BUF_LEN (100 + 1)

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

#ifdef  __cplusplus
}
#endif

#endif