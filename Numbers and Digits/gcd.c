//write a program to find gcd of a number.

#include<stdio.h>

int getGcd(int ino1,int ino2)
{
	int i=1,itemp=0;
	
	//filter
	if(ino1<0 && ino2<0)
		return -1;  // negative numbers 
	
	if(ino1<ino2)
		itemp=ino1;
	else
		itemp=ino2;

	for(i=itemp/2;i>=1;i--)
		if((ino1%i==0) && (ino2%i ==0))
		{
			itemp=i;  //find the greatest divisor
			break;
		}

	return itemp;
}

int main()
{
	printf("GCD of %d ad %d is %d",27,81,getGcd(27,81));

	return 0;
}
