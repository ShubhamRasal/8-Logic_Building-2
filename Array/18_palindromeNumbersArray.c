//accept array from user and display palindrome numbers in it. 
//Input:11, 120,131,24
//Output:11, 131

#include<stdio.h>
#include<malloc.h>

int chk_palindrome(int ino)//returns 1 if number is palindrome otherwise return 0
{
	int itemp=0,idigit=0,irev=0;

	itemp = ino;

	while(itemp!=0)
	{
		idigit = itemp%10;
		irev = irev*10+idigit;
		itemp=itemp/10;
	}

	return irev == ino;
}
void printPalindrome(int arr[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(chk_palindrome(arr[i]))
			printf("%d\n",arr[i]);
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

        printf("output:");
        printPalindrome(arr,ilen);
      
	free(arr);
	return 0;
}
