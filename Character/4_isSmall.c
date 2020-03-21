/*Accept Character from user and check whether it is alphabet is small or not.(a-z). 
Input :  f 
Output :  TRUE 
Input :  & 
Output :  FALSE
*/

#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

bool isSmall(char ch)
{
	return ((ch >='a')&&(ch <='z'));
}

int main()
{
	char ch='\0';
	bool bRet=false;

	printf("Enter Character:");
	scanf("%c",&ch);
	
	bRet = isSmall(ch);
	if(bRet == true)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;
}

