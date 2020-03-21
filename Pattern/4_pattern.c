/*Accept number from user and display below pattern. 
Input :  4 
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include<stdio.h>

void pattern(int ino)
{
	int i=1;
	while(i<=ino)
	{
		printf("#  %d  *  ",i++);
	}
}

int main()
{
	pattern(5);

	return 0;
}
