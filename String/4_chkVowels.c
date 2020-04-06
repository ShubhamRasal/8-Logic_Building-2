/*
 *Write a program which accept string from user and check whether it contains vowels in it or not. 
Input :   “India is my country” 
Output :   TRUE 
Input :   “Demo” 
Output :   TRUE 
Input :   “xyz” 
Output :   FALSE

*/

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

bool chkVowels(char * str)
{
	bool bRet=false;
	while(*str!='\0')
	{
		if(*str == 'a' || *str=='e' ||*str=='i' ||*str=='o'|| *str=='u')
		{	bRet = true;
			break;
		}
		str++;
	}
	return bRet;
}


int main()
{
	char str[20]={'\0'};
	bool bRet =false;

	printf("Enter String:");
	scanf("%[^\n]s",str);

	bRet = chkVowels(str);
	
	if(bRet==true)
		printf("TRUE");
	else
		printf("FALSE");

		
	return 0;
}












