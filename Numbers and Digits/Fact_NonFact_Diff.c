/*
 * Write a program which accept number from user and return difference between 		Summation of all its factors and non factors
 *
 * Input :  12 Output : -34  (16 - 50)
   Input :  10  Output : -29 (8 - 37)
 */

#include<stdio.h>

int FactDiff(int iNo)
{
	int iFact_sum = 0;
	int iNonFact_sum=0;
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		if(iNo % i == 0)
			iFact_sum+=i;
		else
			iNonFact_sum+=i;
	}

	return iNonFact_sum-iFact_sum;
}

int main()
{
	printf("Output:%d",FactDiff(12));

	return 0;
}
