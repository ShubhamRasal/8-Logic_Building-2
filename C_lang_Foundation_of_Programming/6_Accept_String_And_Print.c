//Write a program which accept name from user and print that String.
//Input:Shubham Dharma Rasal  <with space>
//output:Shubham Dharma Rasal
#include<stdio.h>

int main()
{
	char name[20]={'\0'};
	printf("Enter String/name: ");
	scanf("%[^\n]s",name);

	printf("You Entered : %s",name);

	return 0;
}	
