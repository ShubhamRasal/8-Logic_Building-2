//write a program to convert binary to decimal.
//input:1000
//output:8
#include<stdio.h>

int bin_to_dec(int ino)
{
	int ret =0;
	int value =0;

	if(ino == 0)
		return 0;
	
	ret = bin_to_dec(ino/10);

	value = 2 * ret + ino%10;

	return value;
}
//logic2
int bin_to_dec2(int ino)
{
	if(ino!=0)
		return 2*bin_to_dec2(ino/10)+ino%10;
}

int main()
{
	int ino=0;
	printf("Enter Number:");
	scanf("%d",&ino);

	int dec= bin_to_dec(ino);
       	printf("output 1:%d\n",dec);	
	dec = bin_to_dec2(ino);
	printf("output 2:%d",dec);


	return 0;
}
