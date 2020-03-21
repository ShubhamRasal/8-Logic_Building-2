//write a program which accept N from user and print * N times on screen without loop.
//input:5
//output: * * * * *

#include<stdio.h>

void print_star(int ino)
{
	printf("*\t");

	if(ino>1) print_star(--ino);
	else	return;
}

void print_star_2(int ino)
{
	if(ino>1) 
		print_star_2(--ino);
	printf("*\t");
}
void print_star(int ino)
{
	int i=0;
	for(i=0;i<ino;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);

	print_star(ino);
	printf("\n_______________________\n");
	print_star_2(ino);
	return 0;
}

