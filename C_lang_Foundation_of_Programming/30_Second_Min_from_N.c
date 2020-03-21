//write a program which accept N Numbers from user and print second last minimum number from that numbers.
//INPUT: 4 7 2 1 5 3 8
//OUPUT: 2

#include<stdio.h>

int main()
{
	int iNO=0,i=0,imin=0,isecMin=0,itemp=0;

	printf("Program to Find Second Minimum.\n");

	printf("Enter Total Numbers(N):");
	scanf("%d",&iNO);

	printf("Enter Numbers :\n");
	
	scanf("%d",&itemp); //accept first input to initialise imin and isecMin

	imin=isecMin=itemp;

	for(i=1;i<iNO;i++)
	{
		scanf("%d",&itemp);

		if(imin > itemp) 
		{
			isecMin=imin;
			imin=itemp;

		}
		if(imin == isecMin)
		{
			isecMin=itemp;
		}
		if(itemp < isecMin && itemp > imin)
		{
			isecMin=itemp;
		}
	}
	if(imin == isecMin)  // if all numbers are smae then there is no second max
	{
		isecMin=-1;
	}
	printf("Second min :%d",isecMin);
	return 0;
}
