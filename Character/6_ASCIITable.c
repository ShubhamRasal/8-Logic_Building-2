/*
 * Write a program which displays ASCII table.
Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 127.
*/
#include<stdio.h>

void ASCII()
{
	int i=0;
	printf("DEC\tOCTAL\tHEXA\tSYMBOL\n");

	for(i=0;i<=127;i++)
		printf("%d\t%o\t%x\t%c\n",i,i,i,i);
}

int main()
{
	ASCII();

	return 0;
}
