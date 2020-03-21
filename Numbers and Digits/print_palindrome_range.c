//Write a program which accept range from user and print palindrome numbers in range.

#include<stdio.h>

void range_palindrome(int ilower,int iupper)
{
	int i=0,idigit=0,irev=0,itemp=0;

	//filer
	if(ilower > iupper)
		return;
	
	printf("Palindrome Numbers :");	
	for(i=ilower;i<=iupper;i++)
	{	
		itemp=i;
		irev=0;
		while(itemp!=0)
		{
			idigit=itemp%10;
			irev = irev*10+idigit;
			itemp/=10;
		}
	
		if(irev == i)
		{
			printf("%d\t",i);
		}
	
	}
}

int main()
{
	range_palindrome(1,100);

	return 0;
}
