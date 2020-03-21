//write a program to convert octal to decimal.
//input:17
//output:15
#include<stdio.h>

int oct_to_dec(int ino)
{
	int ret =0;
	int value =0;

	if(ino == 0)
		return 0;
	
	ret = oct_to_dec(ino/10);

	value = 8 * ret + ino%10;

	return value;
}
//logic2
int oct_to_dec2(int ino)
{
	if(ino!=0)
		return 8*oct_to_dec2(ino/10)+ino%10;
}

int main()
{
	int ino=0;
	printf("Enter Number:");
	scanf("%d",&ino);

	int dec= oct_to_dec(ino);
       	printf("output 1:%d\n",dec);	
	dec = oct_to_dec2(ino);
	printf("output 2:%d",dec);


	return 0;
}
