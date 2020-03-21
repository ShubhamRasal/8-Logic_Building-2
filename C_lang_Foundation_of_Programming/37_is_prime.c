//write a program to check given number is prime number or not.
//INPUT:5
//OUTPUT: 5 is prime number.

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
	printf("BRET %d\n",bRet);
	return bRet;
}

int main()
{
	int iNo=0;

	printf("Program to Check given number is prime or not.\n");

	printf("Enter Number:");
	scanf("%d",&iNo);

	BOOL bRet=is_prime(iNo);

	if(bRet== TRUE)
		printf("%d is Prime.",iNo);
	else
		printf("%d is Not Prime.",iNo);

	return 0;
}
