/*
 Write a program which accept string from user and return length of largest word. 
Input :   “Marvellous Multi OS Infosystems” 
Output :   11 
 * */

#include<stdio.h>

int largestWordLength(char * str)
{
	int ilength=0;
	int iMaxLength=0;

	while(*str!='\0')
	{
		if(*str==' '|| *(str+1)=='\0')
		{
			if (*(str-1)!=' ')
			{
				if(ilength > iMaxLength)
				{
					iMaxLength=ilength;
				}	
				ilength=0;
			}	
		}
		if(*str!=' ')
			ilength++;
		str++;
	}
	return iMaxLength;
}

int main()
{
	char str[30];

	printf("Enter String:");
	scanf("%[^\n]s",str);
	
	int iRet=largestWordLength(str);
	printf("Largest Word Length:%d\n",iRet);


	return 0;
}
