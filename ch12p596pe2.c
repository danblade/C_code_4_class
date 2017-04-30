/* 
ITS240-01 
Lab 11 
Ch12p596pe2
04/18/2017 
Daniel Kuckuck
	Write a C function named 'difDays()' that calculates and returns the difference between two dates. Each date is passed to the function as a structure using the following global structure:
	struct Date
	{
		int mounth;
		int day;
		int year;
	};
	The difDays() function should make two calls to the days() function written in ch12p596pe1.
*/
#include <stdio.h>
struct Date
{
	int month;
	int day;
	int year;
};

int main()
{
	int difDays();
	int answer = 0;
	answer = difDays();
	printf("The difference of your selected dates %d days.",answer);
	return 0;
}

int difDays()
{
	int days(struct Date);
	struct Date input;
	int numDays = 0, nextNumDays = 0, answer = 0;
	input.year = 0;
	input.month = 0;
	input.day = 0;
	
	printf("We are going to show you how many days there are \nfrom 01/01/1900 to the day you select \n(based on 30 day months and 360 day years).\n");
	
	while ((input.year < 1900 )|| (input.year > 10000))
	{
		printf("\nEnter a year after 1900(####)-->");
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
	
	printf("\nYou have entered %02d/%02d/%04d.\n", input.day, input.month, input.year);
	
	numDays = days(input);
	input.year = 0;
	input.month = 0;
	input.day = 0;
	while ((input.year < 1900 )|| (input.year > 10000))
	{
		printf("\nEnter a year after 1900(####)-->");
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
	printf("\nYou have entered %02d/%02d/%04d.\n", input.day, input.month, input.year);
	nextNumDays = days(input);
	if(nextNumDays > numDays)
	{
		answer = nextNumDays-numDays;
	}
	else
	{
		answer = numDays-nextNumDays;
	}
	return (answer);
}

int days(struct Date received)
{
	int sendBack = 0;
	sendBack = (received.year-1900)*360+((received.month-1)*30)+received.day;
	return (sendBack);
}