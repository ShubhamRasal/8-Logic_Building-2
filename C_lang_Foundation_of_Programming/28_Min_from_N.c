//write a program which accept N Numbers from user and print minimum from that numbers.
//INPUT:4 7 2 1 5 3 8
//OUTPUT: 1

#include<stdio.h>

int main()
{
	int iNum=0,i=0,imin=0,itemp=0;

	printf("Minimum from N numbers.%d\n",imin);

	printf("Enter Number Count :");
	scanf("%d",&iNum);

	printf("Enter N numbers.\n");
	scanf("%d",&itemp);		//consider first number as a minimum and then accept reamining .
	imin=itemp;

	for(i=1;i<iNum;i++)
	{
		scanf("%d",&itemp);
		if(imin > itemp)
			imin=itemp;
	}
	printf("OUTPUT: Minimum = %d",imin);
	return 0;
}
