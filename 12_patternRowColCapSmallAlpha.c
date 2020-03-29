/*
Accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : 
A B C D   
a b c d   
A B C D   
a b c d	    
 */

#include<stdio.h>
void pattern1(int irow,int icol)
{
	int i=0,j=0;
	//char cap='A',small='a';
	char ch='A';

	if((icol <= 0) || (irow <= 0) || (icol > 26))
	{
		printf("Invalid Input.\n");
		return;
	}

	for(i=0;i<irow;i++)
	{	
		if(i%2 == 0)
			ch='A';
		else
			ch='a';

		for(j=0;j<icol;j++)
		{
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}
void pattern(int irow,int icol)
{
	int i=0,j=0;
	char cArr[]={'A','a'};
	if((icol<=0) || (icol>26))
	{	printf("Enter Valid col\n");
		return;
	}

	for(i=0;i<irow;i++)
	{
		for(j=0;j<icol;j++)
			printf("%c\t",cArr[i%2]++);   //i%2
		printf("\n");
		cArr[0]='A';
		cArr[1]='a';
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
	printf("_____________________________________\n");
	pattern1(irow,icol);

	return 0;
}
