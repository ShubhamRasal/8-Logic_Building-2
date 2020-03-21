/*Accept number from user and display below pattern. 
Input :  5  
Output : 1 * 2 * 3 * 4 * 5 * 
*/

#include<stdio.h>

void pattern(int ino)
{
	int i=1;
	while(i<=ino)
	{
		printf("%d  *  ",i++);
	}
}

int main()
{
	pattern(5);

	return 0;
}
