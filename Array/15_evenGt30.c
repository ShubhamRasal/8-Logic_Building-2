//Accept array from user and display all such numbers which are even and greater than 30.

#include<stdio.h>
#include<malloc.h>

void evenAndGt30(int arr[],int size)  
{
	int i=0;

	for(i=0;i<size;i++)
	{
		if((arr[i]%2 ==0) &&(arr[i] > 30))
		{
			printf("%d\n",arr[i]);
		}
	}
}

int main()
{
	int*arr=NULL;
	int ilen =0,i=0,icount=-1;

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
	evenAndGt30(arr,ilen);
	return 0;
}
