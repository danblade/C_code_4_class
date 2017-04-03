/* 
ITS240-01 
Lab 07 
ch8p385pe3
03/06/2017 
Daniel Kuckuck
Input integers 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73 into an array named grades. as each number is input calculate the the average of the numbers & use the average to determine the deviation of each value from the average. Store each deviation in an arry named deviation. display the deviation alongside its corresponding element from grades array.
*/
#include <stdio.h>
#include <math.h>
#define MAX 14

int main()
{
	//declare variables
	int i, totalGrades, deviation[MAX], grades[MAX];
	float fltAverage, fltTotalVariance, fltVariance, fltStdDeviation, fltDisFromMean[MAX];
	//initialize vareiables
	totalGrades = 0;
	fltAverage = 0;
	fltVariance = 0;
	for (int i = 0; i < MAX; i++)
	{
		//prompt for grades
		printf("\nPlease input a student grade -->");
		scanf("%d", &grades[i]);
		//accumulator for final grade
		totalGrades = totalGrades + grades[i];
	}
	fltAverage = totalGrades / MAX;
	for (int i = 0; i < MAX; i++)
	{
		//detemine distance above or below average grade
		fltDisFromMean[i] = grades[i]-fltAverage;
		printf("Our student grades are for test #%d %d which is %.2f from average.\n", i+1, grades[i], fltDisFromMean[i]);
		fltTotalVariance = fltDisFromMean[i] * fltDisFromMean[i] + fltVariance;

	}
		fltVariance = fltTotalVariance/MAX;
		printf("Our data variance is %.2f.", fltVariance);
		fltStdDeviation = sqrt(fltVariance);
		printf("\nOur standard deviation is %.2f", fltStdDeviation);

	return 0;
}