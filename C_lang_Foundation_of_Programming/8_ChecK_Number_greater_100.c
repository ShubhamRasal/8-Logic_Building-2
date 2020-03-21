//write a program which accept one number from user and check that number is greater than 100 or not.
//INPUTL: 101
//OUTPUT: Greater

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL is_greater_or_not_100(int iNO)
{
	BOOL bRet=False;

	if(iNO > 100)
		bRet=True;
	else
		bRet=False;
	
	return bRet;
}

int main()
{
	int iNo=0;
	int bRet=False;

	printf("Enter Number to check whether it is greater than 100 or not :");
	scanf("%d",&iNo);
	
	bRet=is_greater_or_not_100(iNo); //returns TRUE if it is greater

	if(bRet==True)
	{
		printf("OUTPUT:Greater");
	}
	else
	{
		printf("OUTPUT:Not Greater");
	}
	return 0;
}

