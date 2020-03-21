/*.Write a program which accept number from user and display all its non factors. 
Input :  12 Output : 5 7 8 9 10 11 
Input : 13 Output : 2 3 4 5 6 7 8 9 10 11 12  
Input :  10  Output : 3 4 6 7 8 9 
 */

#include<stdio.h>

void NonFact(int iNo)
{
	int i=2;

	for(i=2;i<iNo;i++)
	{
		if(iNo % i !=0 )
			printf("%d ",i);
	}
}

int main()
{
	NonFact(12);

	return 0;
}

