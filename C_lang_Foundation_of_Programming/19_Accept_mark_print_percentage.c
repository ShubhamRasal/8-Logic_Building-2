//write a program which accept marks from user and calculate percentage.
//INPUT:745
//OUTPUT:74.5%

#include<stdio.h>

int main()
{
	int iTotalMarks=0,iOutOfMarks=0;
	float fPercentage=0.0f;

	printf("Enter Total Marks and outOf to Calculate Percentage.\n");

	printf("Enter Total Marks:");
	scanf("%d",&iTotalMarks);

	printf("Enter OutOf marks:");
	scanf("%d",&iOutOfMarks);

	fPercentage =(float) iTotalMarks/iOutOfMarks*100.0f;        // '/' and '*' have same precedance but have Left to Right associativity.(LTR)

	printf("OUTPUT: Percentage %f .",fPercentage);

	return 0;
}
