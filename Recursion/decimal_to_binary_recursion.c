//write a program which accept one decimal and print its binary equivalent.

#include<stdio.h>

//using recursion
void binaryR(int ino)
{
	if(ino > 0)
		binaryR(ino/2);
	else
		return;
	printf("%d",ino%2);
}
int main()
{
	binaryR(11);

	return 0;
}	
