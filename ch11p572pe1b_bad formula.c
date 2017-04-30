/* 
ITS240-01 
Lab 10 
Ch11p572pe1 
04/18/2017 
Daniel Kuckuck
	Write a C function that displays the day of the week cooresponding to a user-entered input number between 1 and 7. That is, in response to an input of 2, the program displays the name Monday. Use an array of pointers in the function. Part B: Include the function in a complete working program.
*/
#include <stdio.h>
#define LSIZE 81
char *weekday [] = {"Sunday",
					"Monday",
					"Tuesday",
					"Wednesday",
					"Thursday",
					"Friday",
					"Saturday"};
		
int main()
{
//prototype our functions
	int weekDisplay(int);
	int leapYear(int);
//declare our variables
	int guess = 0;
	int day = 0;
	int month = 0, leap = 0;
	int year = 0, six = 0, lastTwo = 0, century = 0;
	int birthD = 0;
	int monthValue = 0;
//Get our user input 
	printf("\nEnter the year you were born (####)-->");
	scanf("%d", &year);
	printf("\nEnter the month you were born (##)-->");
	scanf("%d", &month);
	printf("\nEnter the day you were born (##)-->");
	scanf("%d", &day);
	
//decide if we need to add 6 for the 21st centry in our formula and get the last two for year.
	if (year >= 2000)
	{
		lastTwo = (year - 2000);
		six = 6;
		century = 20;
	}
	else if ((year >= 1900) && (year < 2000))
	{
		lastTwo = (year - 1900);
		century = 19;
	}
		
//Get the user's guess of the day of the week they were born on - with validation
	while ((guess < 1) || (guess > 7))
	{
		printf("\nEnter the coresponding number for the day of the week\nyou think you were born on from 1 - 7 for Sunday - Saturday -->");
		scanf("%d", &guess);
	}

//Decide what the month value is for our formula
	switch (month)
	{
		case 1: case 2: case 3:
		monthValue = 1;
		break;
		case 4: case 5: case 6:
		monthValue = 0;
		break;
		case 7: case 8: case 9:
		monthValue = 0;
		break;
		case 10: case 11: case 12:
		monthValue = 0;
		break;
	}

//Decide if we need to add for leap year in the formula
	if ((month == 1) || (month == 2))
	{
		leap = leapYear(year);
	}
//Let the user know what they guessed
	printf("You have guessed that you were born on a %s.\n", weekday[guess-1]);
//The all inclusive formula!!!!   Found how to build formula at https://cs.uwaterloo.ca/~alopez-o/math-faq/node73.html
	
	birthD = (day + ((26 * month - 2)) - 2 * century + lastTwo - monthValue +  (lastTwo / 4) + (century / 4)) % 7;
//Let the user know what the actual day was	
	printf("\nYou where born on day %d of month %d, in the year, %d.\nThis day was a %s.\n", day, month, year, weekday[birthD]);

	return 0;
}

int weekDisplay(int dayCount)
{
	
	dayCount--;
	//printf("You have selected, %s\n", weekday[dayCount]); - thes function is basically useless here.
	
	return dayCount;
}

int leapYear(int year)
{
	
// initialize variables
	int leapYear = 0;

// run our leap year find function 
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 > 0))
		{
		leapYear = 1;
		}
	else
		{
		leapYear = 0;
		}

	return leapYear;
	
}