/*
 1. Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
Input :   “Marvellous Infosystems”    “Logic Building”    5 
Output :  “Marvellous InfosystemsLogic”

*/
#include<stdio.h>
#include<stdlib.h>
int strlenx(char *str)
{
	int ilen=0;
	if(str == NULL)
		return -1;
	while(*str!='\0')
	{
		ilen++;
		str++;
	}
	return ilen;
}

void strncatx(char * src1,char * src2,int icnt)
{

	if(src1 == NULL|| src2 == NULL)
		return;
	int ilen1= strlenx(src1);
	src1+=ilen1;

	while(*src2!='\0'&& icnt!=0)
	{
		*src1++ = *src2++;
		icnt--;
	}
	*src1='\0';
}

int main()
{
	char src1[30]="Shubham Dharma Rasal";
	char src2[30]="Address:Pune";
	
	strncatx(src1,src2,5);

	printf("Destination String:%s\n",src1);
	return 0;
}
		

