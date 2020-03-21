//write a program which accept two numbers and print LCM(least common multiple)
#include<stdio.h>

int get_lcm(int ino1,int ino2)
{
	int i=0;
	int itemp=0;
	
	if(ino1 > ino2)     //if ino1 > ino2 swap and make ino1 < ino2
	{
		itemp=ino1;
		ino1 = ino2;
		ino2 = itemp;
	}

	for(i=1;i<=ino1;i++)
	{
		itemp = ino2 *i;
		if( itemp%ino1 == 0)
		{
			break;
		}
	}
	return itemp;
}

int main()
{
	printf("LCM of %d and %d is %d\n",15,20,get_lcm(15,20));

	return 0;
}
