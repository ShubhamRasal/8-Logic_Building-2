/*Accept N no from user and display addtion of two elements while traversing in forward as well as background direction
input:7 2 5 1 3
output: 10(7+3)
	3(2+1)

input:4 2 7 5 1 6
output:10(4+6)
	3(2+1)
	12(7+5)
	*/

#include<stdio.h>
#include<malloc.h>

void forwardBackwardAddition(int arr[],int size)
{
	int i=0,isum=0;

	for(i=0;i<size-i-1;i++)
	{
		isum = arr[i]+arr[size-i-1];
		printf("%d (%d+%d)\n",isum,arr[i],arr[size-i-1]);
	}
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
	printf("output:");
	forwardBackwardAddition(arr,ilen);

	return 0;
}
