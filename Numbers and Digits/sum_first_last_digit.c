//Write a progam to sum first and last digit of number

#include<stdio.h>

int sum_first_last_digit(int ino)
{
	int isum=0;
	int idigit=0;
	//get last digit
	isum+= ino % 10;

	//get first digit
	while(ino!=0)
	{
		idigit = ino%10;
		ino/=10;
	}
	//add number into sum
	isum+=idigit;

	return isum;
}

int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);
	
	printf("Sum:%d",sum_first_last_digit(ino));

	return 0;
}

