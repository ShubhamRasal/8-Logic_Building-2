//write a program which accepts integer array and print it.
//input:5 1 2 3 4 5
//output:1 2 3 4 5 

#include<stdio.h>
int main()
{
	int isize=0,i=0;
	int arr[10];

	printf("Enter Size of array:");
	scanf("%d",&isize);
	printf("Enter Elements:");
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);

	printf("Your Array:");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);

	return 0;
}
