/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow = 4  iCol = 4
Output :
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0,num=1;

	for(i=0;i<irow;i++)
	{	
		if(i%2 == 0)
			num=2;
		else
			num=1;

		for(j=0;j<icol;j++)
		{
			printf("%d\t",num);
			num+=2;
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
