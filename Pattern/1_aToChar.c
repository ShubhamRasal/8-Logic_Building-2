/*Accept number from user and display below pattern. 
Input :  5  
Output : A B C D E 
*/

#include<stdio.h>

void pattern(int ino)
{
	char ch='A';
	while(ino)
	{
		printf("%c ",ch++);
		ino--;
	}
}

int main()
{
	pattern(5);

	return 0;
}
