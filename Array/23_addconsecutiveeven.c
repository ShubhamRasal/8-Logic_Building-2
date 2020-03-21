/*
 * Accept N no from user and display all consecutie pairs whose addition is even
 * input:3 7 2 5 9 3 6 1
 * output: 3 7
 * 	5 9 
 * 	9 3
 */


#include<stdio.h>
#include<malloc.h>

void consecutiveSumEven(int arr[],int size)
{
        int i=0,isum=0;
        for(i=0;i<size-1;i++)
        {
		if((arr[i]+arr[i+1])%2==0)
		{
			printf("%d+%d=%d\n",arr[i],arr[i+1],arr[i]+arr[i+1]);                		
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
        consecutiveSumEven(arr,ilen);
        return 0;
}

