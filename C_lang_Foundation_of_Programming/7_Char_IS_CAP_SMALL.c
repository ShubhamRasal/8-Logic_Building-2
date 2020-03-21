//Write a program which accept one character from user and check whether that is 
//capital or small.
//Input: P
//Output:Capital

#include<stdio.h>

#define CAPITAL 1		//#define statements are processed by the pre-processor.
#define SMALL 0
#define ERROR 2

int Chk_CapSmall(char cCh)
{
	
	int bRet=ERROR;
	if((cCh>='A') && (cCh<='Z'))
	{
		bRet=CAPITAL;
	}
	else if((cCh>='a')&&(cCh<='z'))
	{
		bRet=SMALL;
	}
	
	return bRet;
}



int main()
{
	char cChar='\0';
	int iRet=ERROR;

	printf("Enter Character :");
	scanf("%c",&cChar);
	
	iRet=Chk_CapSmall(cChar);

	if(iRet==CAPITAL)
	{
		printf("OUTPUT: CAPITAL");
	}
	else if(iRet==SMALL)
	{
		printf("OUTPUT : SMALL");
	}
	else
	{
		printf("OUTPUT :Not a ALPHABET");
	}
	
	
	return 0;
}
