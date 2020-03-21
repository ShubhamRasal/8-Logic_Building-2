//write a program which accept number and print sum of only even digits in that numbers.
//input:12345
//output:6

#include<stdio.h>

int get_evendigit_sum(int ino)
{
	int isum=0,idigit=0;
	while(ino!=0)
	{
		idigit = ino%10;
		if(idigit%2 ==0)
			isum+=idigit;
		ino/=10;
	}
	return isum;
}

int main()
{
	int ino=0;
	printf("Enter number:");
	scanf("%d",&ino);

	int isum=0;
	isum=get_evendigit_sum(ino);
	printf("Sum of even digits in %d is %d\n",ino,isum);

	return 0;
}
