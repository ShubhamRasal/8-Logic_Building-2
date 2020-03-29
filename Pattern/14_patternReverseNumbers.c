/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 5
Output :
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;

	for(i=irow;i>0;i--)
	{
		for(j=0;j<icol;j++)
			printf("%d\t",i);
		printf("\n");
	}
}

int main()
{
	int irow=0,icol=0;

	printf("Enter Row:");
	scanf("%d",&irow);

	printf("Enter Columns:");
	scanf("%d",&icol);

	pattern(irow,icol);

	return 0;
}
