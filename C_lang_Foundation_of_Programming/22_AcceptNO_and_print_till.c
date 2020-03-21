//Write a program which accept number from user and print numbers till number on screen.
//INPUT:5
//OUTPUT:1 2 3 4 5 

#include<stdio.h>

int main()
{
	int iNo=0,i=0;

	printf("Program to print Numbers till your input $.\n");

	printf("Enter Number :");
	scanf("%d",&iNo);

	for(i=1;i<=iNo;i++)
	{
		printf("%d ",i);
	}

	return 0;
}
