//write a program to print Fibonacci series. accept number of element in series from user.
//INPUT:6
//OuTPUT: 0 1 1 2 3 5 

#include<stdio.h>

void print_Fibonacci(int iNo)
{
	int i=0,iterm1=0,iterm2=1,inext_term=0;
	printf("Fibonacci Series:\n");

	for(i=1;i<=iNo;i++)     //++i
	{
		printf("%d ",iterm1);
		inext_term = iterm1 + iterm2;
		iterm1 = iterm2;
		iterm2= inext_term;
	}
}

int main()
{
	int iNo=0;

	printf("Program to print Fibonacci Series.\n");

	printf("Enter Number [How many numbers you want?]:");
	scanf("%d",&iNo);

	print_Fibonacci(iNo);

	return 0;
}
