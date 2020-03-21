//Write a program to calculate power of a number using recursion.
#include<stdio.h>
#include<math.h>
int powerR(int ino,int exp)
{
	if(exp!=0)
		return powerR(ino,--exp)*ino;
	return 1;
}

int main()
{
	int ino=0,iexp=0;

	printf("Enter number:");
	scanf("%d",&ino);

	printf("Enter Power:");
	scanf("%d",&iexp);

	int iret = powerR(ino,iexp);

	printf("Output:%d\n",iret);
	iret = pow(ino,iexp);
	printf("Output using lib:%d\n",iret);
	return 0;
}
