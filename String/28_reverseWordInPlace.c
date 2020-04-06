/*
 Write a program which accept string from user and reverse each word in place. 
Input :   “Marvellous Multi OS” 
Output :   “suollevraM itluM SO”
*/

#include<stdio.h>

void reverseWordInPlace(char * str)
{
	char * first=str;
	char *last=str;
	char cTemp='\0';  //extra variable for swapping

	while(*str!='\0')
	{
		if(*str==' '|| *(str+1)=='\0')
		{
			if(*(str-1)!=' ')
			{	
				if(*(str+1) == '\0')
					last=str;
				else
					last=str-1;

				while(first<last)
				{	
					//swap
					cTemp= * first;
					*first = *last;
					*last= cTemp;
					
					//increment and decrement pointers
					first++;
					last--;
				}
				first=str+1;
			}	
		}
		str++;
	}
}

int main()
{
	char str[30];

	printf("Enter String:");
	scanf("%[^\n]s",str);
	
	reverseWordInPlace(str);
	printf("Output:%s\n",str);


	return 0;
}
