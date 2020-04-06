/*
 Write a program which accept string from user reverse that string in place. 
Input :   “abcd” 
Output :   “dcba” 
Input :   “abba” 
Output :   “abba” 

 * */

#include<stdio.h>

void reverse(char * str)
{
	char * end=str;
	char cTemp='\0';
	//go to last character of string
	while(*(end+1)!='\0')	   //N-1	
		end++;
	
	while(str<end)		   //N/2
	{
		cTemp = *str;
		*str = *end;
		*end = cTemp;

		str++;
		end--;
	}
}


int main()
{
	char str[20]={'\0'};
	char character = '\0';
	int iRet=0;

	printf("Enter String:");
	scanf("%[^\n]s",str);

	reverse(str);

	printf("Reverse String:%s",str);
	
	
	return 0;
}












