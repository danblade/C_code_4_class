/* 
ITS240-01 
Lab 11
ch12p583pe4 
04/18/2017 
Daniel Kuckuck
Write a C program that accepts a user-entered date. Have the program calculate and display the date of the next day. For purposes of this exercise, assume that all months consist of 30 days. Part B: Modify the program to account for the actual number of days in each month.
*/
#include <stdio.h>
struct date
{
	int month;
	int day;
	int year;
	int next;
};

int main()
{
	struct date input;
	input.day = 0;
	input.month = 0;
	input.year = 0;
	
	int nextDay = 0;
	int nextMonth = 0;
	int nextYear = 0;

	while ((input.year < 1 )|| (input.year > 2020))
	{
		printf("\nEnter a year (####)-->");
		scanf("%d", &input.year);
	}
	while ((input.month < 1 )|| (input.month > 12))
	{
		printf("\nEnter a month (##)-->");
		scanf("%d", &input.month);
	}
	while ((input.day < 1 )|| (input.day > 30))
	{
	printf("\nEnter a day (##)-->");
	scanf("%d", &input.day);
	}
	nextDay = input.day;
	nextMonth = input.month;
	nextYear = input.year;

	printf("\nYou have entered %02d/%02d/%04d,", input.day, input.month, input.year);
	if (input.day == 30)
	{
		nextDay = 1;
		nextMonth = nextMonth++;
		if (input.month == 12) 
		{
			nextMonth = 1;
			nextYear++;
		}
			
	}
	else
	{
		nextDay++;
	}

	printf("\nThe next day would be %02d/%02d/%04d,", nextDay, nextMonth, nextYear);
	return 0;
}