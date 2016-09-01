#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "ProfilePicture.h"

bool verifyPictureSize( int nSquareLen, int nWidthBuf, int nHeightBuf, char* pszRet, int* pnRetLen )
{
	int nTmpLen;;
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
