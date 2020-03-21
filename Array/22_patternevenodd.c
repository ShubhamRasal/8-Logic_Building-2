/*accept integer array from user and display as follows:
Input:4,5,3,2,6
Output: **
              #####
              ###
              **
              **
(Note: find relation using above example)*/


#include<stdio.h>
#include<malloc.h>

void patternevenodd(int arr[],int size)
{
        int i=0,j=0;
        for(i=0;i<size;i++)
        {
		if(arr[i]%2 ==1)
		{
                	for(j=1;j<=arr[i];j++)
                	{	
                        	printf("#  ",j);
                	}	
		}
		else
			printf("*  *");
		
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
        patternevenodd(arr,ilen);
        return 0;
}

