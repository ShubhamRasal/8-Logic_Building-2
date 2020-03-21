//Write a program to accept Number from user and print its numberline
//INPUT:4
//OUTPUT: -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

int main()
{
	int iNo=0,i=0;

	printf("Number Line\n");

	printf("Enter Number:");
	scanf("%d",&iNo);

	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d ",i);
	}

	return 0;
}
