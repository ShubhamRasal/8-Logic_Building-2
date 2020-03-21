/*Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
Input :  % 
Output :  TRUE 
Input :  d 
Output :  FALSE
*/

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isSpecial(char ch)
{
	if( ((ch >='0')&&(ch <='9')) || ((ch >='a') && (ch <= 'z')) ||((ch >='A') && (ch <= 'Z'))  )
		return false;
	return true;
}

int main()
{
	char ch='\0';
	bool bRet=false;

	printf("Enter Character:");
	scanf("%c",&ch);
	
	bRet = isSpecial(ch);
	if(bRet == true)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;
}

