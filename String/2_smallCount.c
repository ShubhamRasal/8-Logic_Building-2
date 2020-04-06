/*
 * Write a program which accept string from user and count number of small characters.
Input :   “Hello World”
Output :   8
*/

#include<stdio.h>

int countCapital(char * str)
{
	int iRet=0;
	while(*str!='\0')
	{
		if((*str >= 'a') &&(*str <= 'z'))
			iRet++;
		str++;
	}
	return iRet;
}


int main()
{
	char str[20]={'\0'};
	int iRet =0;

	printf("Enter String:");
	scanf("%[^\n]s",str);

	iRet = countCapital(str);

	printf("Small Count:%d\n",iRet);

		
	return 0;
}












