//write a program to find opwer of given number.
//INPUT:2 4
//OUTPUT: 16

#include<stdio.h>

int main()
{
	int iBase=0,iExp=0,i=0,iAns=1;

	printf("Enter Base Number:");
	scanf("%d",&iBase);

	printf("Enter Raise Number:");
	scanf("%d",&iExp);

	//way1
	i=iExp;
	while(i != 0)
	{
		iAns = iAns*iBase;
		i--;
	}
	printf("Answer :%d\n",iAns);
		
	iAns=0;
	//way 2
	#include<math.h>

	iAns=pow(iBase,iExp);

	printf("Answer : %d ",iAns);

	return 0;
}
