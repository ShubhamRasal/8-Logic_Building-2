/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : 
A B C D   
A B C D   
A B C D   
A B C D	    
 */

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	char cCh='A';
	if((icol<0) || (icol>26))
	{	printf("Enter Valid col\n");
		return;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=0;j<icol;j++)
			printf("%c\t",cCh++);
		printf("\n");
		cCh='A';
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
