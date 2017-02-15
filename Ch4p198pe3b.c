/* 
ITS240-01 
Lab 01 
Ch4p198pe3b 
02/02/2017 
Daniel Kuckuck

b is to write a program that displays prompts
"Enter a year"
"Enter a day of the month"
"Enter a month (use 1 for Jan, etc.):"
Use a variable named year for the first prompt, a variable named month for the second prompt and finally a  variable named day for the third prompt. If the month entered is not between 1 - 12 then an appropriate message should be displayed. If a day is not between 1 - 31 then an appropriate message should be displayed or what is neccessary for the appropriate number of days to the entered month then allocate for leap year. 
*/ 
#include <stdio.h>

int main()
{
	
// initialize variables

	int day, month, year, leapYear;
	day = 0;
	month = 0;
	year = 0;
	leapYear = 0;

// get the year from user

	printf("\nPlease enter a year: ");
	scanf("%d", &year);

// run our leap year find function 

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 > 0))
		{
		leapYear = 1;
		}
	else
		{
		leapYear = 0;
		}

// get the month from user

	printf("\nPlease enter a month: ");
	scanf("%d", &month);

	// validate

		while (month < 1 || month > 12)
			{
				printf("\nError - the month that you entered is not possible.");
				printf("\nPlease enter a correct month between 1 and 12: ");
				scanf("%d", &month);
			}

// get day from user

	printf("\nPlease enter a day: ");
	scanf("%d", &day);
	
	// validate

	switch(month)
	{	case 1: case 3:	case 5: case 7: case 8: case 10: case 12:
		
			while (day < 1 || day > 31)
			{
				printf("\nError - the day that you entered is not possible.");
				printf("\nPlease enter a correct day between 1 and 31: ");
				scanf("%d", &day);
			}
		break;
		case 2:
		if (leapYear == 1)
			{
				while (day < 1 || day > 29)
				{
					printf("\nError - the day that you entered is not possible.");
					printf("\nPlease enter a correct day between 1 and 29: ");
					scanf("%d", &day);
				}
			break;
			}
		else
			{
				while (day < 1 || day > 28)
				{
					printf("\nError - the day that you entered is not possible.");
					printf("\nPlease enter a correct day between 1 and 28: ");
					scanf("%d", &day);
				}
			break;	
			}
		case 4: case 6: case 9: case 11:
			while (day < 1 || day > 30)
			{
				printf("\nError - the day that you entered is not possible.");
				printf("\nPlease enter a correct day between 1 and 30: ");
				scanf("%d", &day);
			}
	}

// show the user what they entered

	printf("\nYou entered, %d/%d/%d. (day/month/year)\n", day, month, year);
		
	// run our year function (simplified)

	if (leapYear == 1)
		{
		printf("\nYour year, %d, is a leap year.\n", year);
		}
	else
		printf("\nYour year, %d, is not a leap year.\n", year);

return 0;
	
}