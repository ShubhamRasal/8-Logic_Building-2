//write a program which accept N and print first 5 multiples of N.
//INPUT: 4
//OUTPUT: 4 8 12 16 20

#include<stdio.h>

int main()
{
	int iNO=0,i=0;

	printf("Program to print first 5 multiples.\n");

	printf("Enter Number:");
	scanf("%d",&iNO);

	for(i=1;i<=5;i++)
	{
		printf("%d ",i*iNO);
	}
	return 0;
}
