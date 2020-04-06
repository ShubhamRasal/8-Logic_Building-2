/*
 * Write a program which accept string from user and copy capital characters of that string into another string.
Input :   “Marvellous Multi OS”
Output :   “MMOS”
*/
#include<stdio.h>
void copyCapital(char * src,char * dest)
{
	if(src == NULL || dest == NULL)
		return;

	while(*src !='\0')
	{
		if((*src >='A') && (*src <= 'Z'))
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
	char src[50]="Shubham Dharma Rasal";
	char dest[30];

	copyCapital(src,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

