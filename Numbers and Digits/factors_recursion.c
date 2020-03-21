//Write a program to print factors  without using loops.

#include<stdio.h>

void print_factors(int ino)
{
	static int i=1;
	
	if(i > ino)
		return;

	if( ino % i == 0)
		printf("%d\n",i);
	i++;
	print_factors(ino);
}

int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);

	print_factors(ino);
	
	return 0;
}
