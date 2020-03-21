//write a program to check whether given number is perfect square or not.
#include<stdio.h>

//logic 1
int chk_perfect_square(int ino)  // returns 1 if perfect square otherwise return 0
{
	int i=0;
	int itemp=0;
	int ians=0;
	for(i=2;i<=ino/2;i++)
	{
		itemp = ino/i;
		if(itemp == i)
		{
			break;
		}
	}
	return itemp*itemp == ino;
}

//logic 2
int chk_perf_sq(int ino)
{
	#include<math.h>
	int sq_rt =0;
	sq_rt =sqrt(ino);

	return sq_rt*sq_rt == ino;
	
	//return pow(sqrt(ino),2) == ino;    //one line code
}

int main()
{
	int itemp=0;

	printf("Enter number:");
	scanf("%d",&itemp);
	
	//using logic 1
	if(chk_perfect_square(itemp))
		printf("%d is Perfect Square.\n",itemp);
	else
		printf("Not Perfect Square.\n");

	//using logic 2
	if(chk_perf_sq(itemp))
                printf("%d is Perfect Square.\n",itemp);
        else
                printf("Not Perfect Square.\n");


	return 0;
}
