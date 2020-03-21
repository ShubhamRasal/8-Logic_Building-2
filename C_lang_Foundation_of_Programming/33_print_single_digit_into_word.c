//write a program which accept single digit number from user and print it into word.
//INPUT:9
//OUTPUT:NINE

#include<stdio.h>
int main()
{
	int iNO=0;

	printf("Print single digit word.\n");

	printf("Enter Digit:");
	scanf("%d",&iNO);

	if(iNO < 9)
	{
		switch(iNO)
		{
			case 0:printf("Zero");
			       break;
			case 1:printf("one");
			       break;
			case 2:
			       printf("two");
			       break;
			case 3:
			       printf("three");
			       break;
			case 4:
			       printf("Four");
			       break;
			case 5:
			       printf("Five");
			       break;
			case 6:
			       printf("six");
			       break;
			case 7:
			       printf("seven");
			       break;
			case 8:
			       printf("eight");
			       break;
			case 9:
			       printf("Nine");
			       break;

			 default:
			       printf("Default");
			       break;
		}
	}
	else
	{
		printf("Wrong Number\n");

	}
	return 0;
}
