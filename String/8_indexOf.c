/*
Write a program which accept string from user and accept one character. Return index of first occurrence of that character. 
Input :   “Hello World”    o
Output :   4 

 * */

#include<stdio.h>

int indexOf(char * str,char cCh)
{
	int iIndex=0;
	while(str[iIndex]!='\0')
	{
		if(str[iIndex] == cCh)
			break;
		iIndex++;
	}
	if(str[iIndex] == '\0')
		return -1;
	else
		return iIndex;
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

	iRet = indexOf(str,character);
	
	if(iRet != -1)
		printf("Character found at: %d\n",iRet);
	
	
	return 0;
}












