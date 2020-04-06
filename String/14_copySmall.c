/*
 * Write a program which accept string from user and copy small characters of that string into another string. 
Input :   “Marvellous multi OS” 
Output :   “arvellous mult
*/
#include<stdio.h>
void copySmall(char * src,char * dest)
{
	if(src == NULL || dest == NULL)
		return;

	while(*src !='\0')
	{
		if((*src >='a') && (*src <= 'z') ||(*src == ' '))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest='\0';
}

int main()
{
	char src[30]="Shubham Dharma Rasal";
	char dest[30];

	copySmall(src,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

