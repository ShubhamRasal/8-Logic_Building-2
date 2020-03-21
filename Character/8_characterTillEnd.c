/*
 * Accept character from user. If it is capital then display all the characters from the input characters till Z.
 If input character is small then print all the characters in reverse order till a. In other cases return directly.
Input :  Q
Output : Q R S T U V W X Y Z
Input :  m
Output : m l k j i h g f e d c b a
Input :  8
Output :
*/

#include<stdio.h>

void printCharTillEnd(char ch)
{
	if((ch >='a')&&(ch<='z'))
		while(ch>='a')
			printf("%c  ",ch--);

	else if((ch >='A')&&(ch <='Z'))
		while(ch<='Z')
			printf("%c  ",ch++);
}

int main()
{
	char ch='\0';

	printf("Enter character:");
	scanf("%c",&ch);

	printCharTillEnd(ch);

	return 0;
}
