//Write a program which accept array of numbers and print sum of digits of number .
//input:11 22 3223 232 43 8
//output: 2(1+1) 4(2+2) 10(3+2+2+3) 7(2+3+2) 7(4+3) 8(8)

#include<stdio.h>
#include<malloc.h>

void printDigitSum(int arr[],int size)
{
	int temp=0,i=0,isum=0;

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		isum=0;
		while(temp!=0)
		{
			isum+=temp%10;
			temp/=10;
		}
	printf("%d : %d\n",arr[i],isum);
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
	printDigitSum(arr,ilen);

	return 0;
}
