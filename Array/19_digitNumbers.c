//accept array from user and display numbers which has 7 in it. 
//Input:24, 37,56,71
//Output:37, 71
#include<stdio.h>
#include<malloc.h>

void digitInNmbers(int arr[],int size,int digit)
{
	int i=0,itemp=0;
	for(i=0;i<size;i++)
	{
		itemp=arr[i];
		while(itemp!=0)
		{
			if(itemp%10 == digit)
			{
				printf("%d\n",arr[i]);
				break;
			}
			itemp/=10;
		}
	}
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

	printf("Enter Digtit (0-9):");
	scanf("%d",&i);

	printf("Output:");
	digitInNmbers(arr,ilen,i);

	return 0;
}
