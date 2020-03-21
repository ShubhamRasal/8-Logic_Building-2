//write a program which accpets two numbers and check wheter thay are equal or not.
//INPUT: 10 10
//OUTPUT:EQUAL

#include<stdio.h>

int main()
{
	int iNo1=0,iNo2=0;

	printf("Check Two Numbers are Equal or Not.\n");

	//accept two numbers
	printf("Enter two Numbers:");
	scanf("%d %d",&iNo1,&iNo2);

	//check equal or not
	if(iNo1 == iNo2)
	{
		printf("OUTPUT:EQUAL");
	}
	else
	{
		printf("OUTPUT:NOT EQUAL");
	}
	return 0;
}
