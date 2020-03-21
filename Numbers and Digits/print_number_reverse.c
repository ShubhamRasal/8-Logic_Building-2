
#include<stdio.h>

void print_number_reverse(int ino)
{
	int idigit=0;

	while(ino!=0)
	{
		idigit = ino%10;
		printf("%d\n",idigit);
		ino/=10;
	}
}

int print_number_reverse_2(int ino)
{
	int idigit=0;
	if(ino==0)
	{
		return 0;
	}
	idigit=ino%10;
	printf("%d\n",idigit);
	return print_number_reverse_2(ino/10);	
}
int main()
{
	int ino=0;

	printf("Enter number:");
	scanf("%d",&ino);

	print_number_reverse(ino);
	printf("_________________\n");
	print_number_reverse_2(ino);

	return 0;
}
