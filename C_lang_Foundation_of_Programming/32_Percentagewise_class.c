//write a program which accept percentage from user and print class as (greater than 70:Distiction, greater than 60: First class,Greater than 50: second class
//,greater than 40: pass class otherwise fail.
//INPUT:78.9
//OUTPUT: Distinction

#include<stdio.h>


int main()
{
	float fpercentage=0.0f;

	printf("Prorgam to give Class depending upon percentage.\n");

	printf("Enter your percentage.\n");
	scanf("%f",&fpercentage);
	
	if(fpercentage > 75.0)
		printf("Distinction");
	else if(fpercentage > 60)
		printf("First class");
	else if(fpercentage > 50)
		printf("Second class");
	else if(fpercentage >40)
		printf("Pass Class");
	else
		printf("Fail");



	return 0;
}
