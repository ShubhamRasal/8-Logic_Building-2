//write a program which accept one number from user and check that number is EVEN or ODD.
//INPUTL: 101
//OUTPUT: ODD

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

// accept number and returns TRUE if it is even number.
BOOL is_EVEN(int iNO)
{
	BOOL bRet=False;

	if(iNO%2 == 0)
		bRet=True;
	else
		bRet=False;
	
	return bRet;
}

int main()
{
	int iNo=0;
	int bRet=False;

	printf("Enter Number to check whether it EVEN or ODD:");
	scanf("%d",&iNo);
	
	bRet=is_EVEN(iNo); //returns TRUE if it is EVEN

	if(bRet==True)
	{
		printf("OUTPUT:EVEN");
	}
	else
	{
		printf("OUTPUT:ODD");
	}
	return 0;
}

