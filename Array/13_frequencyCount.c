//Accept array from user and accept one number from user and return frequency of that number.
//input: 7 
//	21 9 11 11 7 11 51
//	11
//output: 11-> 3
	//int frequency(int arr[],int size,int no);
#include<stdio.h>
#include<malloc.h>

int frequency(int arr[],int size,int inum)  //returns count or 0
{
	int i=0,icnt=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]==inum)
		{
			icnt++;
		}
	}
	return icnt;
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

	printf("Enter Number to count frequency:");
	scanf("%d",&i);

	icount = frequency(arr,ilen,i);
	
	printf("Frequency count: %d.\n",icount);

	return 0;
}
