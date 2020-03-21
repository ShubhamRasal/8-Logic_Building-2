//write a porgam which print common factors of two number.
//input: 100,200
//output:1 2 5 10 20 25 50 100
#include<stdio.h>

void print_common_fact(int ino1,int ino2)
{
	int i=1,itemp=0;
	//filter
	if(ino1 < 0 && ino2 < 0)
	{
		return;
	}
	
	while((i <= ino1) && (i <= ino2))
	{
		if((ino1%i==0) && (ino2%i == 0))
		{
			printf("%d\t",i);
		}
		i++;
	}
}

int main()
{
	print_common_fact(100,200);
	
		return 0;
}

