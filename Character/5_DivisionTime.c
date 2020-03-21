/*Accept division of student from user and depends on the division display exam timing. 
There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM,
C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive) 
Input :  C 
Output :  Your exam at 9.20 AM 
Input :  d 
Output :  Your exam at 10.30 AM
*/

#include<stdio.h>

void ExamTime(char cDivision)
{
	switch(cDivision)
	{
		case 'a':
		case 'A':	
				printf("Your Exam at 7 AM");
				break;
		case 'b':
		case 'B':	printf("Your Exam at 8:30 AM");
				break;
		case 'c':
		case 'C': 	printf("Your Exam at 9:20 AM");
				break;

		case 'd':
		case 'D':	printf("Your Exam at 10:30 AM");
				break;
		default:
				printf("Wrong Input");
				break;
	}
}

int main()
{
	char cDiv='\0';

	printf("Enter Division:");
	scanf("%c",&cDiv);

	ExamTime(cDiv);

	return 0;
}
