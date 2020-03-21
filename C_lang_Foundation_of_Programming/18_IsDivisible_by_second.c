//write a program which accepts two numbers and check whether 1st number is divisible by 2nd number or not.
//INPUT: 40 4
//OUTPUT:DIVISIBLE

#include<stdio.h>

typedef int BOOL; // compiler 

#define TRUE 1
#define FALSE 0

BOOL is_divisible(int iNo1,int iNo2)
{
	BOOL bRet=FALSE;

	if(iNo1 % iNo2 ==0)	// check remainder is 0 or not. if remainder is 0 then it is divisible
	{
		bRet=TRUE;
	}
	else
	{
		bRet=FALSE;
	}

	return bRet;
}

int main()
{
	int iNo1=0,iNo2=0;	
	BOOL bRet=FALSE;

	printf("Check 1st Number is Divisible by 2nd or not\n");

	printf("Enter two Numbers:");
	scanf("%d %d",&iNo1,&iNo2);

	//check divisible or not calling function
	bRet = is_divisible(iNo1,iNo2); // returns True if it is divisible
	if(bRet == TRUE)
	{
		printf("OUTPUT:DIVISIBLE");
	}
	else
	{
		printf("OUTPUT:NOT DIVISIBLE");
	}
	return 0;
}

