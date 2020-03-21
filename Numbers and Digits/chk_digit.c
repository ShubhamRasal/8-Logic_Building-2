//Accept one number as well as accept one digit and check whether that digit is ouccrs in your no or not.
//input: 1234 5 ouput: FALSE  input:1234 3 output:True

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chk_digit(int ino,int digit)  // returns true if digit is available in number otherwise return false
{
	
	int idig=0;
	BOOL bRet=FALSE;

	//filer
	if(digit > 9 && digit < 0)
	{
		return -1;
	}

	while(ino!=0)
	{
		idig = ino%10;
		if(idig == digit)
		{
			bRet=TRUE;
			break;
		}
		ino/=10;
	}

	return bRet;
}
int main()
{
	int ino=0,idig=0;
	BOOL bRet=FALSE;
	printf("Enter number:");
	scanf("%d",&ino);

	printf("Enter Digit:");
	scanf("%d",&idig);
	if(chk_digit(ino,idig) == TRUE)
		printf("OUTPUT:TRUE");
	else
		printf("OUTPUT:FALSE");

	return 0;
}
