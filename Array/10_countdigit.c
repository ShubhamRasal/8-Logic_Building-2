//Write a program which accept array of numbers and print count of digit.
//input:11 22 3223 232 43 8
//output: 2 2 4 3 2 1

#include<stdio.h>
#include<malloc.h>

void printDigitCount(int arr[],int size)
{
	int temp=0,i=0,icnt=0;

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		icnt=0;
		while(temp!=0)
		{
			icnt++;
			temp/=10;
		}
	printf("%d : %d\n",arr[i],icnt);
	}
}

int main()
{
	int*arr=NULL;
	int ilen =0,i=0;

	printf("Enter size of array:");
	scanf("%d",&ilen);

	arr=(int*)malloc(sizeof(int)*ilen);
	//arr =(int*)calloc(ilen,sizeof(int));
	printf("Enter Elements:");
	for(i=0;i<ilen;i++)
	{
		scanf("%d",&arr[i]);
	}
	printDigitCount(arr,ilen);

	return 0;
}
