//Accept array from user and one number and return its last occurance array.
//input:7 11 5 11 2 9
//      11
//output:3 (3 is the index of 11 which is last occurance of 11)

#include<stdio.h>
#include<malloc.h>

int lastOccurance(int arr[],int size,int inum)  //returns index or -1
{
	int i=0;

	for(i=size;i>=0;i--)
	{
		if(arr[i]==inum)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int*arr=NULL;
	int ilen =0,i=0,index=-1;

	printf("Enter size of array:");
	scanf("%d",&ilen);

	arr=(int*)malloc(sizeof(int)*ilen);
	//arr =(int*)calloc(ilen,sizeof(int));
	printf("Enter Elements:");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter Number to search:");
	scanf("%d",&i);
	index = lastOccurance(arr,ilen,i);
	if(index!=-1)
		printf("Found at %d index.\n",index);
	else
		printf("False");

	return 0;
}
