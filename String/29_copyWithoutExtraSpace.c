/*Write a program which accept string from user and copy the contents into another string by removing extra white spaces. 
Input :   “Marvellous    multi     OS” 
Output :   “Marvellous multi OS”
*/

#include<stdio.h>

void copyWithoutExtraSpace(char str[],char dest[])
{

	while(*str!='\0')
	{
		if(*str!=' ')
		{	
			*dest=*str;

			dest++;
		}
		else if(*str == ' ' && *(str+1)!=' ')
		{
			*dest = *str;
			dest++;
		}
		str++;
	}
	*dest='\0';
}

int main()
{
	char str[30];
	char dest[30];

	printf("Enter String:");
	scanf("%[^\n]s",str);
	
	copyWithoutExtraSpace(str,dest);
	printf("Output:%s\n",dest);


	return 0;
}
