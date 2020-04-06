/*
 Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function) 
Input :   “Marvellous Multi OS” 
Output :   “Marvellous Multi OS”    in another string
void StrCpyX(char *src, char *dest) ;
 * */

#include<stdio.h>

void strCpyX(char * str,char * dest)
{
	if(str==NULL || dest == NULL)
		return;
	while(*str!='\0')
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest='\0';
}


int main()
{
	char src[30]="India is my country";
	char dest[30];

	strCpyX(src,dest);

	printf("Destination:%s\n",dest);

	return 0;
}












