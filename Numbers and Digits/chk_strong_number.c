// accept one number and check whether that number is strong number or not.	
//   Strong number : special number whose sum of factorial of digits is equal
//	to the original number. 
//	For example: 145 is strong number. 
//	Since, 1! + 4! + 5! = 145
// Strong Numbers: 1,2,145,40585
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

int chk_strong_number(int ino)
{
	int itemp=0,isum=0,ifact=1;  
	int idigit=0;
	
	//assign input value to temp varible
	itemp = ino;

	while(itemp!=0)
	{
		// get digit and divide number
		idigit = itemp%10;
		itemp/=10;
		
		//calculate factorial of digit
		while(idigit!=0)
		{
			ifact*=idigit--;
		}
		//add factorial to sum
		isum+=ifact;
		//reset fact varible 
		ifact=1;
	}

	return isum == ino;
}

int main()
{
	int inum=0;
	bool bRet=false;

	printf("Enter Number:");
	scanf("%d",&inum);

	bRet=chk_strong_number(inum);

	if(bRet == true)
	{
		printf("Number is Strong Number.");
	}
	else
	{
		printf("Number is NOT strong Number.");
	}

	return 0;
}
	
	
