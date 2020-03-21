//write a program which accept two numbers and print difference between that numbers.
//INPUT: 10 3
//OUTPUT: 7

#include<stdio.h>

int main()
{
	int iNo1=0,iNo2=0;
	int iDiff=0;

	printf("Enter Two Numbers:");
	scanf("%d %d",&iNo1,&iNo2);
	
	//calculate diff
	iDiff= iNo1-iNo2;

	printf("OUTPUT: Difference is %d. [%d - %d = %d]\n",iDiff,iNo1,iNo2,iDiff);

	return 0;
}

