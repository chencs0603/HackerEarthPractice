#include <stdio.h>
#include "ToggleString.h"

//������ĸ��ת
void ToggleStringTest()
{
	//�������
	char inputStr[MAX_STR_LEN];
	int  inputStrLen;
	char outputStr[MAX_STR_LEN];
	int  outputStrLen;
	bool bRet = false;
	//��ȡ�����ַ���
	scanf("%s", inputStr);
	inputStrLen = strlen(inputStr);
	//��ʼ������
	memset(outputStr, 0x00, MAX_STR_LEN);
	outputStrLen = inputStrLen;

	bRet = toggleStr(inputStr, inputStrLen, outputStr, &outputStrLen);
	if (bRet)
	{
		printf("%s\n", outputStr);
	}
	else{
		printf("error!!!");
	}
}
//Death, the Multiverse and Nothing
//ע�����ﻻ�����ﲻ����
void DeathTest()
{
	int size = 0; 
	int i = 0;
	int* pArray = NULL;

	scanf("%d\n", &size);

	pArray = (int*)malloc(size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &pArray[i]);//���ܻ���
	}

	for (i = 0; i < size; i++)
	{
		printf("%d\n", pArray[i] - 1);
	}
}

int main()
{
	//ToggleStringTest();
	
	DeathTest();

	return 0;
}