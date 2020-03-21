/*Accept number from user and display below pattern. 
Input :  5  
Output : 5 # 4 # 3 # 2 # 1 #
*/

#include<stdio.h>

void pattern(int ino)
{
	while(ino)
	{
		printf("%d  #  ",ino--);
	}
}

int main()
{
	pattern(5);

	return 0;
}
