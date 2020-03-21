//write a program which accept two numbers and prints minimum number.
//INPUT: 12 14
//OUTPUT: 12

#include<stdio.h>

//returns the minimum numebr from parameters.
int get_min(int iNo1,int iNo2)
{
	int min=0;

	if(iNo1 < iNo2)
		min=iNo1;
	else
		min=iNo2;

	return min;
}

int main()
{
	int iNo1=0,iNo2=0;
	int iRet=0;

	printf("Check which Number is Minimum.\n");

	//accepts two numbers.
	printf("Enter Two Numbers :");
	scanf("%d %d",&iNo1,&iNo2);

		// get_max returns the minimum of its parameter.
	iRet=get_min(iNo1,iNo2);

	printf("OUTPUT:MINIMUM : %d",iRet);

	return 0;
}
