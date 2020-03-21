//write a progam which accept one number and print only prime factors.
//  input: 6
//  output:2,3
//  input:11
//  output:11

#include<stdio.h>

void print_prime_fact(int ino)  //prints only prime factors of a number
{
	int i=0,isprime=0,j=0;

	printf("Output:");
	//for 1
	for(i=2;i<=ino/2;i++)  //complexity N/2
	{
		if(ino%i == 0)  //check number is factor or not
		{
			isprime =1;
			//for(j=2;j<=i;j++)  //complexity N
			for(j=i/2;j>=2;j--)  //complexity N/2
			{
				if(i%j == 0)
				{
					isprime=0;
					break;
				}
			}
			if(isprime == 1) 
			{
				printf("%d   ",i);
			}
		}
	}

	if(j==0)   // for 1 is iterating till ino/2 so if it prime number j's value is not going to change
	{	   // for 1 is itrating till ino/2 for to print prime number's(ino) factors which is itself.
		   //this for loop
		printf("%d\n",ino);
		printf("Number itself Prime Number.\n");

	}
}

int main()
{
	int ino=0;
	printf("Enter Number:");
	scanf("%d",&ino);

	print_prime_fact(ino);

	return 0;
}
