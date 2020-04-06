/*
Write a program which accept string from user and accept one character. Return index of last occurrence of that character. 
Input :   “Hello World”    e
Output :   1 

 * */

#include<stdio.h>

int lastIndexOf(char * str,char cCh)
{
	int iIndex=0,icharIndex=-1;
	while(str[iIndex]!='\0')
	{
		if(str[iIndex] == cCh)
			icharIndex = iIndex;
		iIndex++;
	}
	return icharIndex;
}


int main()
{
	char str[20]={'\0'};
	char character = '\0';
	int iRet=0;

	printf("Enter String:");
	scanf("%[^\n]s",str);

	printf("Enter Character:");
	scanf(" %c",&character);

	iRet = lastIndexOf(str,character);
	
	if(iRet != -1)
		printf("Character found at: %d\n",iRet);
	
	
	return 0;
}












