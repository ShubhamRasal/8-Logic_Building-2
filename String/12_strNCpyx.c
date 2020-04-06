/*
 Write a program which accept string from user and one number and copy the contents of that string into another string. (Implement strncpy() function) 
Input :   “Marvellous Multi OS”    10 
Output :   “Marvellous 
Note : If third parameter is greater than the size of source string then copy whole string into destination. 

 * */

#include<stdio.h>

void strNCpyX(char * src,char * dest,int iCnt)
{
	if(src==NULL || dest == NULL)
		return;

	while(*src!='\0'&& iCnt!=0)
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
}


int main()
{
	char src[30]="India is my country";
	char dest[30];

	strNCpyX(src,dest,10);

	printf("Destination:%s\n",dest);

	return 0;
}












