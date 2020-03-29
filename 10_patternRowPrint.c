/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol =  4  
Output : 1 1 1 1    
	 2 2 2 2   
	 3 3 3 3   
	 4 4 4 4
	    
 */
#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
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
