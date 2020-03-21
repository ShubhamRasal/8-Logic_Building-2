//Write a program which accept array of numbers and check whether array palindrome or not

#include<stdio.h>
#include<malloc.h>

int chkArrayPalindrome(int arr[],int size)
{
	int i=0,iflag=1;

	for(i=0;i<size-i;i++)
	{
		if(arr[i]!=arr[size-i-1])
		{
			iflag=0;
			break;
		}
	}
	return iflag;
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
	iret =chkArrayPalindrome(arr,ilen);
	if(iret ==1)
		printf("Array is Palindrome.");
	else
		printf("Array is NOT palindrome.");
	return 0;
}
