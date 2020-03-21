//write a program which accept a number and return count of digiTS.

#include<stdio.h>

int get_digit_count(int ino)
{
	int count=0;

	while(ino!=0)
	{
		ino=ino/10;
		count++;
	}
	return count;
}

int main()
{
	int iret=0;
	printf("Enter Number :");
	scanf("%d",&iret);

	iret=get_digit_count(iret);

	printf("count:%d\n",iret);

	return 0;
}

