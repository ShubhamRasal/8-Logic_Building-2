/*
	Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 5  
Output : 5 4 3 2 1   
	 5 4 3 2 1   
	 5 4 3 2 1
	 
 */
#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;

	for(i=0;i<irow;i++)
	{
		for(j=icol;j>0;j--)
			printf("%d\t",j);
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
