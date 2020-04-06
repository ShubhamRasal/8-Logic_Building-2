/*
 *  Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
Input :   “Marvel   lous Pyth   on
Output :   “MarvellousPython”

*/
#include<stdio.h>
void trimCopy(char * src,char * dest)
{
	if(src == NULL || dest == NULL)
		return;
	while(*src!='\0')
	{
		if(*src==' ')
		{
			src++;
			continue;
		}
		*dest++=*src++;
	}
	*dest='\0';
}

void trimCopyx(char src[],char dest[])
{
	if(src==NULL || dest == NULL)
		return;
	int i=0,j=0;
	for(i=0;src[i]!='\0';i++)
	{
		if(src[i]!=' ')
		{
			//printf("inside if\n");
			dest[j]=src[i];
			j++;
		}
	}
	dest[j]='\0';
}
int main()
{
	char src1[30]="Shubham Dharma Rasal";
	char dest[30];


	trimCopyx(src1,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

