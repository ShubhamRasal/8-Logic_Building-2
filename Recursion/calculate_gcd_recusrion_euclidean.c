//write a program to calculate GCD using recursion.(use Euclidean algorithm)
#include<stdio.h>
//gcdr(12,9)
//gcdr(9,12)
//gcdr(3,9)  //12%9 ==3
//gcdr(0,3)  // 9%3 == 0
int gcdR(int ino1,int ino2)
{
	//printf("%d %d \n",ino1,ino2);
	if(ino1 == 0)
		return ino2;
	return gcdR(ino2%ino1,ino1);    //
}
int gcdR2(int ino1,int ino2)
{
	if(ino2 == 0)
		return ino1;
	return gcdR2(ino2,ino1%ino2);
}

int main()
{
	int ino1=0,ino2=0;

	printf("Enter number 1:");
	scanf("%d",&ino1);
	printf("Enter number 2:");
	scanf("%d",&ino2);

	//int gcd = gcdR(ino1,ino2);
	int gcd = gcdR2(ino1,ino2);
	printf("output:%d",gcd);

	return 0;
}
