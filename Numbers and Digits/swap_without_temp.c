//write a program which accept two numbers and swap content without third variable
#include<stdio.h>
int main()
{
	int ino1=0,ino2=0;

	printf("Enter Number 1:");
	scanf("%d",&ino1);

	printf("Enter Number 2:");
	scanf("%d",&ino2);

	ino2 = ino2 - ino1;
	ino1 =	ino2+ino1;
	ino2 = ino1-ino2;

	printf("%d %d\n",ino1,ino2);

	return 0;
}
