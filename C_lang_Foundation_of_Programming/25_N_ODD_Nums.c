//Write a program which accept N from user and print all odd numbers up to N.
//INPUT: 18
//OUTPUT: 1 3 5 7 9 11 13 15 17 

#include<stdio.h>

int main()
{
	int iNO=0,i=0;
	 
	printf("Progam to print all odd numbers upto N\n");

	printf("Enter Number:");
	scanf("%d",&iNO);

	//logic 1
	for(i=1;i<=iNO;i++)
	{
		if(i % 2 !=0)
		{
			printf("%d ",i);
		}
	}
	//logic 2
	printf("\nUsing logic 2\n");
	for(i=1;i<=iNO;i+=2)
	{
		printf("%d ",i);
	}
	return 0;
}
