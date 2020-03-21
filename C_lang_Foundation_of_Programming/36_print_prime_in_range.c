//write a program to print prime in range.
//INPUT:1 10
//OUTPUT: 2,3,5 7 

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL is_prime(int iNo)
{
	int i=0;
	BOOL bRet=TRUE;

	for(i=iNo/2;i >=2;i--)
	{
		if(iNo % i == 0)
		{
			bRet=FALSE;
			break;
		}
	}
	if(iNo==1)
		return FALSE;

	return bRet;
}

int main()
{
	int iRange1=0,iRange2=0;

	printf("Program to Find prime number in Range.\n");

	printf("Enter Range Lower Bound:");
	scanf("%d",&iRange1);

	printf("Enter Range Upper Bound:");
	scanf("%d",&iRange2);

	int i=0;
	for(i=iRange1;i<=iRange2;i++)
	{

		BOOL bRet=is_prime(i);

		if(bRet== TRUE)
			printf("%d is Prime.\n",i);
	}

	return 0;
}
