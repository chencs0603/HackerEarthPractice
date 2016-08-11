#ifndef _TOGGLESTRING_H
#define _TOGGLESTRING_H

#define MAX_STR_LEN 100

#ifdef  __cplusplus  
extern "C" {
#endif

#include "stdbool.h"

//�ж��Ƿ�Ϊ��д��ĸ
bool isUpperCase(char character);
//�ж��Ƿ�ΪСд��ĸ
bool isLowerCase(char character);
//ת���ַ�����Ϊ��ĸ����Сд��ת������Ϊ��ĸ��������ת��
bool toggleChar(char originalChar, char* pRetChar);
//ת���ַ���
bool toggleStr(char* pOriginalStr, int originalStrLen, char* pRetStr, int* pRetStrLen);

#ifdef  __cplusplus
}
#endif

#endif