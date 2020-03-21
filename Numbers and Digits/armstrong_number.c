//Write a progam which accept number and check whether that number is armstrong number or not.
//input: 153
//output:true
//
//armstrong number: 0,1,153,370
//armstrong number is a number that is equal to the sum of cubes of its digits.
#include<stdio.h>
#include<math.h>
typedef int BOOL;

#define true 1
#define false 0

BOOL chk_armstrong(int inum)
{	//return true if number is armstrong otherwise false
	int isum=0,ino=inum;

	while(ino!=0)
	{
		isum+=pow(ino%10,3);
		ino/=10;
	}
	return isum==inum;
}

int main()
{
	int inum=0;

	printf("Enter Number:");
	scanf("%d",&inum);

	BOOL bRet=false;

	bRet=chk_armstrong(inum);
	if(bRet == true)
		printf("true");
	else
		printf("false");

	return 0;
}


