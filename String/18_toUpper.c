/*
 * Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case. 
Input :   “Marvellous 2” 
Output :   “MARVELLOUS 2”
*/
#include<stdio.h>
void SmallToCapCopy(char * src,char * dest)
{
	if(src == NULL || dest == NULL)
		return;
	while(*src!='\0')
	{
		if(*src>='a'&& *src <='z')
		{

			*dest=(*src-32);
		}
		else
			*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main()
{
	char src1[30]="Shubham Dharma Rasal";
	char dest[30];

	SmallToCapCopy(src1,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

