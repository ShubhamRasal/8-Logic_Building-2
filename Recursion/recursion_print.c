//write a program to print 1 to 100 without loop

#include<stdio.h>

void print_recursion(int ino)
{
	printf("%d\n",ino);
	
	if(ino < 100 )print_recursion(++ino);
	else return;
}
void print_recursion_range(int ilow,int iup)
{
	if(ilow > iup) return;

	printf("%d\n",ilow);

	print_recursion_range(++ilow,iup);
}
int main()
{

	//print_recursion(1);
	print_recursion_range(1,10);
	return 0;
}
