//Write a progam to swap two numbers.
// input:10 20
// output: 20 10

#include<stdio.h>

void swap(int *ptr1,int *ptr2)
{
	int itemp=0;
//	printf("%d %d",*ptr1,*ptr2);
	itemp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = itemp;
}

int main()
{
	int ino1,ino2;
	printf("Enter Number 1:");
	scanf("%d",&ino1);

	printf("Enter Number 2:");
	scanf("%d",&ino2);
	

	swap(&ino1,&ino2);

	printf("After Swapping:%d %d\n",ino1,ino2);

	return 0;
}
