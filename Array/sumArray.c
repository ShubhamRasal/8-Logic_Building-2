//Write a program which accept array and print sum of all numbers.
// input:5 22 31 55 43 59 
//output:210

#include<stdio.h>

int sumArray(int arr[],int size)
{
	int i=0,sum=0;

	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	int isize=0,arr[20]={0};
	int i=0;

	printf("Enter Size:");
	scanf("%d",&isize);
	
	printf("Enter Elements:");
	for(i=0;i<isize;i++)
		scanf("%d",&arr[i]);
	
	i=sumArray(arr,isize);
	printf("Total Sum:%d",i);

	return 0;
}

