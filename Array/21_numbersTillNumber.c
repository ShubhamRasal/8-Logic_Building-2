//accept integer array from user and display as follows:
//Input: 7,2,5,3,9
//Output:  1,2,3,4,5,6,7
//               1,2
//               1,2,3,4,5
//               1,2,3
//               1,2,3,4,5,6,7,8,9
//(Note: find relation using above example) 


#include<stdio.h>
#include<malloc.h>

void numbersTillNumber(int arr[],int size)
{
        int i=0,j=0;

        for(i=0;i<size;i++)
        {
                for(j=1;j<=arr[i];j++)
                {
                        printf("%d  ",j);
                }
		printf("\n");
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
        numbersTillNumber(arr,ilen);
        return 0;
}

