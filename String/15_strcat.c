/*
 Write a program which take 2 strings from user and concat second string after first string. (Implement strcat() function). 
Input :   “Marvellous Infosystems”    “Logic Building” 
Output :  “Marvellous Infosystems Logic Building”

*/
#include<stdio.h>
#include<stdlib.h>
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

char * strcatx(char * src1,char * src2)
{
	char * concatStr=NULL;

	if(src1 == NULL|| src2 == NULL)
		return NULL;
	
	int itemp = strlenx(src1)+ strlenx(src2);
	concatStr = (char *) malloc(sizeof(char)*itemp);
	
	itemp=0;

	while(*src1!='\0')
	{
		concatStr[itemp++]=*src1;	
		src1++;
	}
	while(*src2!='\0')
	{
		concatStr[itemp++]=*src2;
		src2++;
	}
	concatStr[itemp]='\0';
	return concatStr;
}

int main()
{
	char src1[30]="Shubham Dharma Rasal";
	char src2[30]="Address:Pune";
	char* retStr=NULL;


	retStr = strcatx(src1,src2);

	printf("Destination String:%s\n",retStr);
	return 0;
}
		

