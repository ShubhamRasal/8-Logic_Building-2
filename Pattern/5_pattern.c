/*Accept number from user and display below pattern. 
Input :  8 
Output :  2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void pattern(int ino)
{
	int i=1;
	while(i<=ino)
	{
		printf("%d ",2*i++);
	}
}

int main()
{
	pattern(5);

	return 0;
}
