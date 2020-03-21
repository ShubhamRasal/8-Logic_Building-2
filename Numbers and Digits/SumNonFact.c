/*
 *Write a program which accept number from user and return summation of all its non factors. 
Input :  12 Output : 50  
Input :  10  Output : 37
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iSum=0;
	int i=1;

	for(i=2;i<iNo;i++)
	{
		if(iNo % i !=0)
			iSum+=i;
	}
	return iSum;
}

int main()
{
	int iAns = SumNonFact(12);
	printf("Output:%d",iAns);

	return 0;
}
