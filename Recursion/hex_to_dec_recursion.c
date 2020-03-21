//write a program to convert hex to decimal

#include<stdio.h>

int hex_to_dec(int ino)
{
	if(ino!=0)
		return 16*hex_to_dec(ino/16)+ino%16;
	
}

int main()
{
	unsigned int ino=0;

	printf("Enter Number:");
	scanf("%x",&ino);
	
	printf("Output %%d:%d\n",ino);
	printf("output:%d",hex_to_dec(ino));

	return 0;
}
