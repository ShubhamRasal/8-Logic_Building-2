//write a program which accept two numbers and prints maximum number.
//INPUT: 12 14
//OUTPUT: 14

#include<stdio.h>

int get_max(int iNo1,int iNo2)
{
	int max=0;

	if(iNo1 > iNo2)
		max=iNo1;
	else
		max=iNo2;

	return max;
}

int main()
{
	int iNo1=0,iNo2=0;
	int iRet=0;

	printf("Check which Number is Maximum.\n");

	//accepts two numbers.
	printf("Enter Two Numbers :");
	scanf("%d %d",&iNo1,&iNo2);

		// get_max returns the maximum of its parameter.
	iRet=get_max(iNo1,iNo2);

	printf("OUTPUT:MAXIMUM : %d",iRet);

	return 0;
}
