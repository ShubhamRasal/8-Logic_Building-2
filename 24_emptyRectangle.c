/*
Accept number of rows and number of columns from user and display below pattern.
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 6  iCol = 5  
Output : 
* * * * *   
* @ @ @ *   
* @ @ @ *   
* @ @ @ *   
* @ @ @ *   
* * * * *


*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;

	for(i=1;i<=irow;i++)
	{	
		for(j=1;j<=icol;j++)
		{
			if((i==1)||(j==1)||(i==irow)||(j==icol))
				printf("*\t");
			else
				printf("@\t");
		}
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
