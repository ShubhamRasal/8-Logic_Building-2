//write a program which accpet number from user and if numer is less than 50 then print small,if it is greater than 50 and less than 100
//then print medium,if it is greater than 100 then print large.
//INPUT: 75
//OUTPUT:Medium

#include<stdio.h>
int main()
{
	int iNo=0;

	printf("Small < 50 < Medium < 100 < large \n");

	printf("Enter Number:");
	scanf("%d",&iNo);

	if(iNo<50)
		printf("small");
	else if(iNo<100)
		printf("medium");
	else
		printf("large");

	return 0;
}
