//write a progam which accept array of numbers and return difference between sum of even numbers and sum of odd numbers.
//input:4 11 22 33 44
//output: 44 (44+22)-(33-11)

#include<stdio.h>

int diffEvenOdd(int arr[],int size)
{
	int i=0;
	int esum=0,osum=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]%2 == 0)
			esum+=arr[i];
		else
			osum+=arr[i];
	}
	return (esum-osum);
}

int main()
{
	int size=0,i=0,arr[20]={0};

	printf("Enter Number:");
	scanf("%d",&size);

	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	i=diffEvenOdd(arr,size);

	printf("Output:%d",i);

	return 0;
}
