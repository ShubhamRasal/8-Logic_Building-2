/*Accept Character from user and check whether it is alphabet or not (A-Z a-z). 
Input :  F 
Output :  TRUE 
Input :  & 
Output :  FALSE
*/

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isalphabet(char ch)
{
	return (((ch >='a')&&(ch<='z'))||((ch >='A')&&(ch <='Z')));
}

int main()
{
	char ch='\0';
	bool bRet=false;

	printf("Enter Character:");
	scanf("%c",&ch);
	
	bRet = isalphabet(ch);
	if(bRet == true)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;
}

