//write a program to calculate factorial without using loops.

#include<stdio.h>

int cal_factorial(int ino)
{
	if(ino==1)return 1;

	return ino*cal_factorial(ino-1);
}

int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);

	int iret=cal_factorial(ino);

	printf("output:%d",iret);

	return 0;
}
