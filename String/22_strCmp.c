/*
 *Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function). 
Input :   “Marvellous Infosystems”    “Marvellous Infosystems” 
Output :  TRUE
*/
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define true 1
#define false 0

BOOL strcmpx(char *str1,char * str2)
{
	if(str1==NULL || str2==NULL)
		return -1;
	while(*str1!='\0' && *str2!='\0')
	{
		printf("%c",*str1);
		if(*str1!=*str2)
			break;
		str1++;
		str2++;
	}
	return (*str1=='\0'&& *str2=='\0'); // return true if both string are at end
}

int main()
{
	char  *src1="Shubham Dharma Rasal";
	char  src2[]="Shubham Dharma Rasal";
	BOOL bRet=false;

	if (strcmpx(src1,src2)==true)
		printf("TRUE\n");
	else
		printf("FALSE\n");

	return 0;
}
		

