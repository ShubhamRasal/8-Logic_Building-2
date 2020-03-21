/*
 * Accept N no from user and display all such no whose magnititude is same as summation of its neighbours
 * input:3 2 6 4 1 -3 5 8 2
 * output: 2+4 = 6
 * 	4+ -3 = 1 
 * 	-3+8 = 5 
 * 	*/


#include<stdio.h>
#include<malloc.h>

void sumEqualMagnitutde(int arr[],int size)
{
        int i=0,isum=0;
        for(i=1;i<size-1;i++)
        {
		if((arr[i-1]+arr[i+1])==arr[i])
		{
			printf("%d+%d=%d\n",arr[i-1],arr[i+1],arr[i]);                		
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
        sumEqualMagnitutde(arr,ilen);
        return 0;
}

