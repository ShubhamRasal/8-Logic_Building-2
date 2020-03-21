//write a program which accept N Numbers from user and print second last maximum number from that numbers.
//INPUT: 4 7 2 1 5 3 8
//OUPUT: 7

#include<stdio.h>

int main()
{
	int iNO=0,i=0,imax=0,isecMax=0,itemp=0;

	printf("Program to Find Second Maximum.\n");

	printf("Enter Total Numbers(N):");
	scanf("%d",&iNO);

	printf("Enter Numbers :\n");
	
	scanf("%d",&itemp); //accept first input to initialise imax and isecMax

	imax=isecMax=itemp;

	for(i=1;i<iNO;i++)
	{
		scanf("%d",&itemp);

		if(imax < itemp) 
		{
			isecMax=imax;
			imax=itemp;

		}
		if(imax == isecMax)
		{
			isecMax=itemp;
		}
		if(itemp > isecMax && itemp< imax)
		{
			isecMax=itemp;
		}
	}
	if(imax == isecMax)  // if all numbers are smae then there is no second max
	{
		isecMax=-1;
	}
	printf("Second max :%d",isecMax);
	return 0;
}
