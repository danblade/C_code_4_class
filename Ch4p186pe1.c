/* 
ITS240-01 
Lab 01 
Ch4p186pe1 
01/30/2017 
Daniel Kuckuck

Calculate letter grade: from numerical grade
*/ 
#include <stdio.h>


int main()
{
	//declare variables - reusing code learned in class!
	double averageGrade;
	double totalGrade;
	double inputGrade;
	int counter;
	char gradeLetter;
	char anOrA;
	//initalize variables
	totalGrade = 0; 
	averageGrade = 0;
	counter = 0;
	inputGrade = 0;
	gradeLetter = 'F';
	anOrA = 'n';
	//priming read
	printf("\nPlease input a grade or -1 to exit -->  ");
	scanf("%lf", &inputGrade);
	printf("\nYou have entered %.2lf\n", inputGrade);
	//counter++; /* adding count for the seed value*/
	while(inputGrade >= 0)
		{
			//initalize accumulater
			totalGrade = totalGrade + inputGrade;
			counter++;
			printf("\nPlease input a grade or -1 to exit -->  ");
			scanf("%lf", &inputGrade);
			printf("\nYou have entered %.2lf\n", inputGrade);
		}
	averageGrade = totalGrade / counter;
	if (averageGrade >= 90)
		{
			gradeLetter ='A';
			anOrA ='n';
		}
		else if (averageGrade >= 80)
		{
			gradeLetter ='B';
			anOrA = ' ';
		}
		else if (averageGrade >= 70)
		{
			gradeLetter ='C';
			anOrA = ' ';
		}
		else
		{
			gradeLetter ='F';
			anOrA = 'n';
	}

	printf("\n Your current total is %c%.2lf out of %d tests which amounts to a%c %c.\n", 37, averageGrade, counter, anOrA, gradeLetter);
	printf("%c\n", gradeLetter);
	//printf("\n%%\n"); prints one %
	//printf("\nCounter is %d.\n", counter);


return 0;
	
}