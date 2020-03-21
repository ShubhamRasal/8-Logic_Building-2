//write a program to accept array of integers and print it in reverse order.
//input: 5 22 31 55 43 59 
//output: 59 43 55 31 22

#include<stdio.h>

void reverse(int arr[],int size)
{
	int i=0;

	for(i=size-1;i>=0;i--)
		printf("%d\t",arr[i]);
}

int main()
{
	int size=0,arr[20]={0};
	int i=0;

	printf("Enter Number:");
	scanf("%d",&size);

	printf("Enter Elements:");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);

	reverse(arr,size);

	return 0;
}
