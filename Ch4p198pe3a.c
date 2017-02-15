/* 
ITS240-01 
Lab 01 
Ch4p198pe3a 
02/02/2017 
Daniel Kuckuck

All years that are evenly divisible by 400 or are evenly divisable by 4 and not evenly by 100 are leap years. Write a C program that accepts the year as a user input, determines if the year is a leap year, and displays an appropriate message that tells the user if the year is or is not a leap year. 
*/

#include <stdio.h>


int main()
{
//initialize variables
	
	int year;
	
// request user input
	
	printf("\nPlease enter a year: ");
	scanf("%d", &year);

// run our function - figure if year is a leap year or not (my formula is based on http://www.mathsisfun.com/leap-years.html, because I finally understood the explanation from there. retrieved 02/02/2017)

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 > 0))
		{
		printf("\nYour year, %d, is a leap year.\n", year);
		}
	else
		printf("\nYour year, %d, is not a leap year.\n", year);
	
	return 0;
}