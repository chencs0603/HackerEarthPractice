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

int main()
{
	ToggleStringTest();
	
	return 0;
}