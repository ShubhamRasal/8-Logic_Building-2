/*
 * Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case. 
Input :   “Marvellous Python 2” 
Output :   “marvellous python 2
*/
#include<stdio.h>
void capToSmallCopy(char * src,char * dest)
{
	if(src == NULL || dest == NULL)
		return;
	while(*src!='\0')
	{
		if(*src>='A'&& *src <='Z')
		{

			*dest=(*src+32);
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

	capToSmallCopy(src1,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

