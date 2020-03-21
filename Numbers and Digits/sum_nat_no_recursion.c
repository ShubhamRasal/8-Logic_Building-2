//write a progam to print of natural numbers using recursion.
//input:5
//output: 15 (1+2+3+4+5)

#include<stdio.h>

int sumR(int ino)   
{
	//logic 1
	/*int sum=0;	
	if(ino ==0) return 0;
	sum = ino+sumR(ino-1);
	return sum;
	*/
	//logic 2
	if(ino!=0) return ino+sumR(ino-1);
	
}

int main()
{
	int ino=0;

	printf("Enter Number:");
	scanf("%d",&ino);

	int isum = sumR(ino);

	printf("Sum:%d",isum);

	return 0;
}

