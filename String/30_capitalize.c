/*
 * Write a program which accept string from user and replace each occurrence of first character of each word into capital case.
Input :   “marvellous infosystems”
Output :  “Marvellous Infosystems”
*/

#include<stdio.h>

char toUpper(char ch)
{
	//printf("%c",ch+32);
	if(ch >='a' && ch<='z')
		return ch-32;
	return ch;
}
void capitalize(char * str)
{
	if(str==NULL)
		return;
	//capitalize first word
	*str = toUpper(*str);
	while(*str!='\0')
	{
		if(*(str-1)==' ')
		{
			*(str) = toUpper(*str);
		}
		str++;
	}
}

int main()
{
	char str[30];

	printf("Enter String:");
	scanf("%[^\n]s",str);
	
	capitalize(str);
	printf("Output:%s\n",str);


	return 0;
}
