/*
Write a program which accept string from user and copy that characters of that string into another string in reverse order. 
Input :   “Marvellous Python” 
Output :   “nohtyP suollevraM
*/
#include<stdio.h>

int strlenx(char *str)
{
	int ilen=0;
	if(str == NULL)
		return -1;
	while(*str!='\0')
	{
		ilen++;
		str++;
	}
	return ilen;
}

void strcpyRev(char * src,char * dest)
{

	if(src == NULL|| dest == NULL)
		return;	
	int itemp=strlenx(src)-1;
	
	while(itemp!=-1)
	{
		*dest++=src[itemp--];
	}
}

int main()
{
	char src1[30]="Shubham Dharma Rasal";
	char dest[30];


	strcpyRev(src1,dest);

	printf("Destination String:%s\n",dest);
	return 0;
}
		

