//Write a program which accepts one integer and one character from user and print both.

#include<stdio.h>

int main()
{
	int iNo=0;
	char cCh='\0';

	printf("Enter Integer Number :");
	scanf("%d ",&iNo);


	printf("Enter Character :");
	scanf(" %c",&cCh);

	printf("NO:%d \t Character: %c\n",iNo,cCh);

	return 0;
}
