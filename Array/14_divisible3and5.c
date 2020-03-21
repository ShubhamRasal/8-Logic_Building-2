//Accept array from user and display all the numbers which are divisible by 5&3.

#include<stdio.h>
#include<malloc.h>

void divisible3And5(int arr[],int size)  
{
	int i=0;

	for(i=0;i<size;i++)
	{
		if((arr[i]%5==0) &&(arr[i]%3 == 0))
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
	divisible3And5(arr,ilen);
	return 0;
}
