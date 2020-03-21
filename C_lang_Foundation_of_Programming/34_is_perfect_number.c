//write a program to check given numbers is perfect number or not.
//INPUT:6
//OUTPUT:6 is Perfect Number.

//perfect numbers are 6,28,496,8128 
//sum of its factors are equal to itself

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chk_Perfect(int iNo)
{
	int i=0,sum=0;
	
	for(i=1;i<=iNo/2;i++)
	{
		if( iNo % i == 0)
			sum+=i;
	}
	
	if(sum == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Check Given Number is Perfect is or not?\n");

	printf("Enter Number:");
	scanf("%d",&iNo);
	
	bRet=chk_Perfect(iNo);

	if(bRet == TRUE)
	{
		printf("%d is Perfect Number.",iNo);
	}else
	{
		printf("%d is Not Perfect Number.",iNo);
	}
	return 0;
}
