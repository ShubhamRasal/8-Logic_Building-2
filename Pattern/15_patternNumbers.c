/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol =  4  
Output : 
1 	2 	3 	4   
5 	6 	7 	8   
9 	10 	11 	12
*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0,num=1;

	for(i=1;i<=irow;i++)
	{
		for(j=0;j<icol;j++)
			printf("%d\t",num++);
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
