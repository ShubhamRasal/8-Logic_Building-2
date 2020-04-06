/*
 *Write a program which accept string from user and display it inn reverse order. 
Input :   “Hello World” 
Output :   “dlroW olleH”

 * */

#include<stdio.h>

void displayReverse(char * str)
{
	char * temp=str;

	while(*(temp+1)!='\0')
		temp++;
	while(temp>=str)
		printf("%c",*temp--);
}


int main()
{
	char str[20]={'\0'};

	printf("Enter String:");
	scanf("%[^\n]s",str);

	displayReverse(str);
	
	//printf("size in main:%d\n",sizeof(str));
		
	return 0;
}












