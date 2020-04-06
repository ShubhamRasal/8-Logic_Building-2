/*
Write a program which accept string from user and accept one character. Check whether that character is present in string or not. 
Input :   “Shubham”    b 
Output :   TRUE
Input :   “India”    W 
Output :   FALSE

 * */

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

bool isPresent(char * str,char cCh)
{
	while(*str!='\0')
	{
		if(*str == cCh)
			break;
		str++;
	}
	return *str != '\0';
}


int main()
{
	char str[20]={'\0'};
	char character = '\0';

	printf("Enter String:");
	scanf("%[^\n]s",str);

	printf("Enter Character:");
	scanf(" %c",&character);

	bool bRet = isPresent(str,character);
	
	//printf("bRet: %d\n",bRet);
	
	if(bRet==false)
		printf("False");
	else
		printf("True");
		
	return 0;
}












