//Write a program which accept array of numbers and check whether array is sorted or not.(asc)
#include<stdio.h>
#include<malloc.h>

int chkArraySorted(int arr[],int size)
{
	int i=0;

	for(i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			break;
		}
	}
	return i == size-1 ;
}

int main()
{
	int*arr=NULL;
	int ilen =0,i=0,iret=0;

	printf("Enter size of array:");
	scanf("%d",&ilen);

	arr=(int*)malloc(sizeof(int)*ilen);
	//arr =(int*)calloc(ilen,sizeof(int));
	printf("Enter Elements:");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}
	iret =chkArraySorted(arr,ilen);
	if(iret ==1)
		printf("Array is Sorted.");
	else
		printf("Array is NOT Sorted.");
	return 0;
}
