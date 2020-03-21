//Write a program which accept number from user and print that number of $ on screen.
//INPUT:5
//OUTPUT:$$$$$

#include<stdio.h>

int main()
{
	int iNo=0,i=0;

	printf("Program to print Number of times $.\n");

	printf("Enter Number :");
	scanf("%d",&iNo);

	for(i=0;i<iNo;i++)
	{
		printf("$");
	}

	return 0;
}
