/* 
ITS240-01 
Lab 11
Ch12p596pe1
04/18/2017 
Daniel Kuckuck
	Write a C function named 'days()' that determines the number of days from the date 1/1/1900 for any date passed as a structure. Use the following 'Date' structure:
	struct Date
	{
	int month;
	int day;
	int year;
	};
	In writing the days() function, use the convention that all years have 360 days and each month consists of 30 days. The function should return the number of days for any date structure passed to it.
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
	int days(struct Date);
	struct Date input;
	int numDays = 0;
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
	printf("The difference of your selected date and 01/01/1900 is %d days.",numDays);
	return 0;
}
int days(struct Date received)
{
	int sendBack = 0;
	sendBack = (received.year-1900)*360+((received.month-1)*30)+received.day;
	return (sendBack);
}
