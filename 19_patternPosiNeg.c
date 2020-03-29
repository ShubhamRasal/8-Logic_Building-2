/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow = 5  iCol = 5  
Output : 
1  2  3  4  5   
-1 -2 -3 -4 -5    
1  2  3  4  5
-1 -2 -3 -4 -5    
1  2  3  4  5
*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	int number=1,mult=1;

	for(i=0;i<irow;i++)
	{	
		number=1;

		for(j=0;j<icol;j++)
		{
			printf("%d\t",number++*mult);
		}
		mult=(-mult);
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
