//write a program which accept N Numbers from user and print maximum from that numbers.
//INPUT:4 7 2 1 5 3 8
//OUTPUT: 8

#include<stdio.h>

int main()
{
	int iNum=0,i=0,imax=0,itemp=0;

	printf("Maximum from N numbers.\n");

	printf("Enter Number Count :");
	scanf("%d",&iNum);

	printf("Enter N numbers.\n");
	for(i=0;i<iNum;i++)
	{
		scanf("%d",&itemp);
		if(imax<itemp)
			imax=itemp;
	}
	printf("OUTPUT: MAximum = %d",imax);
	return 0;
}
