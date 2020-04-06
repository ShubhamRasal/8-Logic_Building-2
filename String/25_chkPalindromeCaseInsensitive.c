/*
 * 
 * */
#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0
char toLower(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		return ch+32;
	}
	else
		return ch;
}

BOOL chkPalindrome(char * src)   //case insensetive
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
	while(src<last)
	{	
		if(toLower(*src) != toLower(*last))
			break;
		src++;
		last--;
	}
	return src == last;
}
int main()
{
	char src[]="1abABA1";

	BOOL bRet = chkPalindrome(src);

	if(bRet == true)
		printf("TRUE\n");
	else
		printf("FALSE\n");
	return 0;
}
		

