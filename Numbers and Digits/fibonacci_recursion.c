//write a prorgam which accept N from user and print N terms of Fibonacci Series using recursion


#include<stdio.h>

int fibonacciR(int ino)
{
	if(ino == 0 || ino == 1)
		return ino;
	return fibonacciR(ino-1)+fibonacciR(ino-2);
}

int main()
{
	int ino=4;

	int iret = fibonacciR(ino);
	printf("%d",iret);

	return 0;
}
