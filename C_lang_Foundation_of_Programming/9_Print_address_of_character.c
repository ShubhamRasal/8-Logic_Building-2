//write a program which is accept one character from user and store it into memory 
//and print it address of that character.

#include<stdio.h>

int main()
{
	char cCh='\0';

	printf("Enter character :");
	scanf("%c",&cCh);

	printf("Character is %c is stored into memory address :%p",cCh,&cCh);

	return 0;
}
