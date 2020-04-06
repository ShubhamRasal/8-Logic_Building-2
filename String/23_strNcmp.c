/*
  Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function). 
  Input :   “Marvellous Infosystems”    “Marvellous Logic Building”    10
Output :  TRUE
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define true 1
#define false 0

BOOL strNcmpx(char *str1,char * str2,int iCnt)
{
	if(str1==NULL || str2==NULL)
		return -1;
	while(*str1!='\0' && *str2!='\0' && iCnt!=0)
	{
		//printf("%c",*str1);
		if(*str1!=*str2)
			break;
		str1++;
		str2++;
		iCnt--;
	}
	return (iCnt==0); // return true if both string are at end
}

int main()
{
	char  *src1="Shubham Dharma Rasal";
	char  src2[]="Shubham Rasal";
	BOOL bRet=false;

	if (strNcmpx(src1,src2,9)==true)
		printf("TRUE\n");
	else
		printf("FALSE\n");

	return 0;
}
		

