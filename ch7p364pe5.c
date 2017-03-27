/* 
ITS240-01 
Lab 06
Ch7p364pe5 
03/03/2017 
Daniel Kuckuck
Total number of days from 1/1/1900 and the addresses of the variables month and day. Calculate the current year, month, and day for the given number of days and write these values in their respective variables using the passed values. We are assuming that each year is 365 and each month is 30 days.
*/
#include <stdio.h>
#define STARTDAYS = 365000


int yrCalc(long *totalDays, int *year, int *month, int *day)
{
	printf("\n%d totalDays in yrCalc", totalDays);
	printf("\n%d", *year);
	printf("\n%d", *month);
	printf("\n%d", *day);
	*totalDays += 365 * (*year - 2001);
	*totalDays += 30 * (*month - 1);
	*totalDays +=  *day;
	return *totalDays;
}

int main()
{
	long totalDays;
	totalDays = 365000;
	printf("\n%d totalDays start", totalDays);
	int year, yearDays = 365, month, monthDays = 30, day, days = 1;
	printf("\nEnter current year --> ");
	scanf("%d", &year);
	printf("\nEnter current month (1-12)--> ");
	scanf("%d", &month);
	printf("\nEnter today's day number (1-30)--> ");
	scanf("%d", &day);
	printf("\n%d totalDays 2", totalDays);
	yrCalc(&totalDays, &year, &month, &day);

	printf("\nTotal days from 1/1/1900 to today's date is %d.", totalDays);
	return 0;
}

