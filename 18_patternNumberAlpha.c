/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow = 5  iCol = 5  
Output : 
a b c d e   
1 2 3 4 5   
a b c d e   
1 2 3 4 5   
a b c d e 

*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	char ch='\0';

	for(i=0;i<irow;i++)
	{	
		if(i%2 == 0)
			ch='a';
		else
			ch='1';

		for(j=0;j<icol;j++)
		{
			printf("%c\t",ch++);
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
