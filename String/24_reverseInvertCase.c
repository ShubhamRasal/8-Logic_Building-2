/*
 * Accept string from user and reverse the contents of that string by toggling the case.
Input :   “aCBdef” Output :   “FEDcbA” 
 * */
#include<stdio.h>
int isUpper(char ch)
{
	return(ch>='A' && ch<='Z');
}

int isLower(char ch)
{
	return(ch>='a' && ch<='z');
}

void reverseInvertCase(char * src)
{
	//printf("in funtion:%s\n",src);
	/*if(src == NULL)
		return;
	*/
	char * last=src;
	char cTemp1='\0',cTemp2='\0';
	
	//printf("%s in function",last);
	while(*last!='\0')
	{
		last++;
	}
	last--;

	//printf("last: %c",*last);
	while(src<=last)
	{
		if(isUpper(*src))
			cTemp1=*src+32;
		else if(isLower(*src))
			cTemp1=*src-32;
		else
			cTemp1=*src;

		if(isUpper(*last))
		{
			cTemp2=*last+32;
		}
		else if(isLower(*last))
			cTemp2=*last-32;
		else
			cTemp2=*last;
		
		//swap 
		*src=cTemp2;
		*last=cTemp1;
		src++;
		last--;
	}

}
int main()
{
	char src[]="Shubham";

	reverseInvertCase(src);

	printf("Destination String:%s\n",src);
	return 0;
}
		

