//write a program to check whether given program is palindrom or not.
#include<stdio.h>


int chk_palindrome(int ino)		//returns 1 if number is palindrome otherwise return 0
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

int main()
{
	
	int iret = 0;
	
	printf("Enter Number:");
	scanf("%d",&iret);
	
	iret = chk_palindrome(iret);
	
	if(iret == 1)
		printf("Number is Palindrome.\n");
	else
		printf("Number is NOT palindrome.\n");

	return 0;
}

