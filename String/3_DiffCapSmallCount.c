/*
 Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
Input :   “Hello World” 
Output :   6 (8-2)

 * */

#include<stdio.h>

int diffCapitalSmallCount(char * str)
{
	int iCap=0,iSmall=0;
	while(*str!='\0')
	{
		if((*str >= 'A') &&(*str <= 'Z'))
			iCap++;
		else if((*str >='a') && (*str <='z'))
			iSmall++;
		str++;
	}
	//printf("Cap:%d\n",iCap);
	//printf("Small:%d\n",iSmall);
	return iSmall-iCap;
}


int main()
{
	char str[20]={'\0'};
	int iRet =0;

	printf("Enter String:");
	scanf("%[^\n]s",str);

	iRet = diffCapitalSmallCount(str);

	printf("Difference(small-capital):%d\n",iRet);

		
	return 0;
}












