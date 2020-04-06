/*
Write a program which accept string from user and accept one character. Return frequency of that character. 
Input :   “Shubham”    h 
Output :   2 
Input :   “Hello World”    S 
Output :   0

 * */

#include<stdio.h>

int charFrequency(char * str,char cCh)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str == cCh)
			iCnt++;
		str++;
	}
	return iCnt;
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

	iRet = charFrequency(str,character);
	
	printf("Frequency: %d\n",iRet);
	
	
	return 0;
}












