//accept integer array from user, accept range from user and give addition of numbers between range
//Input: Array:7, 9,15,37,22,29
//           Range:10-25
//Output:15+22=37
#include<stdio.h>
#include<malloc.h>

int addRangeNumbers(int arr[],int size,int lower,int upper)
{
	int i=0,isum=0;
	for(i=0;i<size;i++)
	{
		if((arr[i]>=lower) && (arr[i]<=upper))
			isum+=arr[i];
	}
	return isum;
}

int main()
{
	int*arr=NULL;
	int ilen =0,i=0,iret=0,ilow=0,iupp=0;

	printf("Enter size of array:");
	scanf("%d",&ilen);

	arr=(int*)malloc(sizeof(int)*ilen);
	//arr =(int*)calloc(ilen,sizeof(int));
	printf("Enter Elements:");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter Range");
	scanf("%d %d",&ilow,&iupp);
	iret = addRangeNumbers(arr,ilen,ilow,iupp);
	printf("Total:%d.\n",iret);

	return 0;
}
