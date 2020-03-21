 //write a program to accept integer array and print only even numbers from array
 //input: 5 22 31 55 43 59
 //output:22
 
#include<stdio.h>

void EvenNo(int arr[],int size)
{
	int i=0;
	printf("Even Numbers :\n");

	for(i=0;i<size;i++)
	{
		if(arr[i]%2 ==0)
		{
			printf("%d\n",arr[i]);
		}
	}
}

int main()
{
	int size = 0;
	int arr[20];
	int i=0;
	printf("Enter Size:");
	scanf("%d",&size);

	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	EvenNo(arr,size);
	return 0;
}
