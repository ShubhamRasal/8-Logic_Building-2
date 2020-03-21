//5)Accept array and one number and return addition that numbers elements only.
//input: 3 2 7 5 2 9 
//       3
//output: 12 (3+2+7)
#include<stdio.h>
#include<malloc.h>

int addNNumbers(int arr[],int size,int N)  //returns sum of N nos from array
{
	int i=0,isum=0;
	if(N > size)
		N=size;

	for(i=0;i<N;i++)
	{
		isum+=arr[i];
	}
	return isum;
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

	printf("Enter Number to addition:");
	scanf("%d",&i);
	iret = addNNumbers(arr,ilen,i);
	printf("Total:%d.\n",iret);

	return 0;
}
