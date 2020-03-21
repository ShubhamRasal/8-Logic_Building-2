//write a program to accept array of numbers and print prime numbers from that array.
#include<stdio.h>
void primeArray(int arr[],int size)
{
	int i=0,temp=0,j=0,flag=0;

	for(i=0;i<size;i++)
	{
		flag = 1;
		for(j=arr[i]/2;j>1;j--)
		{
			if(arr[i]%j == 0)
			{	flag = 0;
			}
		}
		if(flag == 1 && arr[i]!=1)
		{
			printf("%d\t",arr[i]);
		}
			
	}
}

int main()
{
	int i=0,size=0,arr[20]={0};

	printf("Enter size:");
	scanf("%d",&size);

	printf("Enter Elements:");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);

	printf("Prime Numbers:");
	primeArray(arr,size);

	return 0;
}
