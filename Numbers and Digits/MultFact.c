/*Write a program which accept number from user and display its multiplication of factors. 
Input :  12 Output : 144  (1 * 2 * 3 * 4 * 6) 
Input : 13 Output : 1  (1) 
Input :  10   Output : 10  (1 * 2 * 5)
*/
#include<stdio.h>
int MultFact(int iNo)
{
	int iAns=iNo;   //number itself a factor of it.
	int i=1;

	for(i=1;i<(iNo/2)+1;i++)
	{
		if(iNo % i == 0)
			iAns = iAns * i;
	}	

	return iAns;
}

int main()
{
	int iNo=12;
	int iAns = MultFact(iNo);
	printf("Output:%d\n",iAns);

	return 0;
}
