/*
 * Accept character from user and display its ASCII value in decimal, octal and hexadecimal format. 
Input :   A 
Output :  Decimal   65 
Octal   0101    
Hexadecimal  0X41 

*/

#include<stdio.h>

void display(char ch)
{
	printf("Decimal:	%d\n",ch);
	printf("Octal:		0%o\n",ch);
	printf("HexaDecimal:	0x%x\n",ch);
}

int main()
{
	char ch='\0';

	printf("Enter character:");
	scanf("%c",&ch);

	display(ch);

	return 0;
}
