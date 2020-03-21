/*Accept Character from user and check whether it is digit or not.(0-9). 
Input :  7 
Output :  TRUE 
Input :  d 
Output :  FALSE
*/

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isDigit(char ch)
{
	return ((ch >='0')&&(ch <='9'));
}

int main()
{
	char ch='\0';
	bool bRet=false;

	printf("Enter Character:");
	scanf("%c",&ch);
	
	bRet = isDigit(ch);
	if(bRet == true)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;
}

