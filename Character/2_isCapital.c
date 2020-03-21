/*Accept Character from user and check whether it is alphabet is capital or not.(A-Z). 
Input :  F 
Output :  TRUE 
Input :  & 
Output :  FALSE
*/

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isCapital(char ch)
{
	return ((ch >='A')&&(ch <='Z'));
}

int main()
{
	char ch='\0';
	bool bRet=false;

	printf("Enter Character:");
	scanf("%c",&ch);
	
	bRet = isCapital(ch);
	if(bRet == true)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;
}

