/*
 * 1.Write a program which accept string from user count number of words from string
Input :   “Marvellous Multi OS”
Output :   3
Input :   “          Marvellous Multi            OS       Pune”
Output :   4

 * */

#include<stdio.h>

int wordCount(char * str)
{
	int iCnt=0;

	while(*str!='\0')
	{
		//printf("%c\n",*str);
		if(*str==' '|| *(str+1)=='\0')
		{
		//	printf("Inside if:%c\n",*str);

			if( (*(str-1)!=' '))//(*(str+1)=='\0'))
			{
				iCnt++;	
		//		printf("
		}	}
		str++;
	}
	return iCnt;
}

int main()
{
	char str[30]="Shubham Dharma Rasal";
	
	int iRet=wordCount(str);
	printf("Count:%d\n",iRet);


	return 0;
}
