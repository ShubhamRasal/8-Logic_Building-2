//Write a program which accept array of numbers and return maximum of it.
//condition: array elements are distinct. no duplicate numbers.
//input:11 22 33 23 43 8
//output: 43

#include<stdio.h>

int minimum(int arr[],int size)
{
	int i=0,min=arr[i];
	
	for(i=0;i<size;i++)
		if(min > arr[i])
			min = arr[i];

	return min;
}

int main()
{
	  int size=0,i=0,arr[20]={0};

        printf("Enter Number:");
        scanf("%d",&size);

        for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
        
	i=minimum(arr,size);

        printf("Output:%d",i);

        return 0;
}

