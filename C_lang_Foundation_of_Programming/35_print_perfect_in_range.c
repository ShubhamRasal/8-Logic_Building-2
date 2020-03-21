//write a program to print perfect numbers in given rangeOB
//INPUT: 1 10
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
	int iRangeLower=0,iRangeUpper=0,i=0;
	BOOL bRet=FALSE;

	printf("Print Perfect numbers in Range \n");

	printf("Enter Lower Bound:");
	scanf("%d",&iRangeLower);

	printf("Enter Upper Bound:");
	scanf("%d",&iRangeUpper);

	for(i=iRangeLower;i<iRangeUpper;i++)
	{
		bRet=chk_Perfect(i);
	

		if(bRet == TRUE)
		{
			printf("%d is Perfect Number.\n",i);
		}
	}
	return 0;
}
