//write a program which accept two numbers and print multiplication of that numbers.
//INPUT: 10 3
//OUTPUT: 30

#include<stdio.h>

int main()
{
	int iNo1=0,iNo2=0;
	int iMult=0;
	
	//accept two Numbers
	printf("Enter Two Numbers:");
	scanf("%d %d",&iNo1,&iNo2);
	
	//calculate Addition
	iMult= iNo1*iNo2;

	printf("OUTPUT: Multiplication is %d. [%d * %d = %d]\n",iMult,iNo1,iNo2,iMult);

	return 0;
}

