/*
 *1.Write a program which accept string from user and count number of capital characters. 
Input :   “India Is My Country” 
Output :   4
 * */

#include<stdio.h>

int countCapital(char * str)
{
	int iRet=0;
	while(*str!='\0')
	{
		if((*str >= 'A') &&(*str <= 'Z'))
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

	printf("Captital Count:%d\n",iRet);

		
	return 0;
}












