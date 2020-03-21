//write a program which accept number and print the sum of its digits.
//input:1234 output:10
#include<stdio.h>
int get_digit_sum(int ino)
{
	int idigit=0,isum=0;

	while(ino!=0)
	{
		idigit=ino%10;
		isum+=idigit;
		ino/=10;
	}
	return isum;
}

int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);

	ino=get_digit_sum(ino);

	printf("Sum of Digits :%d\n",ino);

	return 0;
}
