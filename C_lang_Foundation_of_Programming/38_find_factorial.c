//write a program to find Factorial
//INPUT:5
//OUTPUT:120

#include<stdio.h>

int get_factorial(int iNo)
{
	int i=0,ifact=1;

	for(i=iNo;i>1;i--)
		ifact*=i;
	
	return ifact;
}

int main()
{
	int iNo=0;

	printf("Program to find Factorial.\n");

	printf("Enter Number:");
	scanf("%d",&iNo);

	int iRet=get_factorial(iNo);

	printf("Factorial of %d is %d.",iNo,iRet);

	return 0;
}
