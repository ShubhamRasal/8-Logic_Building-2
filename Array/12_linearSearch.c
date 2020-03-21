//Accept elements from user as well as one element and return the index at which element ouccurs in our array.[linear search]
//input:15 11 9 7 18 21 , 18
//output: 4 (index)

#include<stdio.h>
#include<malloc.h>

int linearSearch(int arr[],int size,int inum)  //returns index or -1
{
	int i=0,index=-1;

	for(i=0;i<size;i++)
	{
		if(arr[i]==inum)
		{
			index=i;
			break;
		}
	}
	return index;
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
	index = linearSearch(arr,ilen,i);
	if(index!=-1)
		printf("Found at %d index.\n",index);
	else
		printf("False");

	return 0;
}
