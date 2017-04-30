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
	int leapYear = 0;

	while ((input.year < 1 )|| (input.year > 2020))
	{
		printf("\nEnter a year up to 2020 (####): ");
		scanf("%d", &input.year);
	}

	nextYear = input.year;

	if ((input.year % 400 == 0) || (input.year % 4 == 0 && input.year % 100 > 0))
		{
		leapYear = 1;
		}
	else
		{
		leapYear = 0;
		}

	while ((input.month < 1 )|| (input.month > 12))
	{
		printf("\nEnter a month (##): ");
		scanf("%d", &input.month);
		nextMonth = input.month;
	}

	switch(input.month)
	{	case 1: case 3:	case 5: case 7: case 8: case 10: case 12:
		
			while (input.day < 1 || input.day > 31)
			{
				printf("\nEnter a day between 1 and 31: ");
				scanf("%d", &input.day);
			}
			if (input.day == 31)
			{
				nextDay = 1;
				nextMonth++;
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
		break;
		case 2:
		if (leapYear == 1)
			{
				while (input.day < 1 || input.day > 29)
				{
					printf("\nEnter a day between 1 and 29: ");
					scanf("%d", &input.day);
				}
				if (input.day == 29)
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
					nextDay = input.day;
					nextDay++;
				}
			break;
			}
		else
			{
				while (input.day < 1 || input.day > 28)
				{
					printf("\nEnter a day between 1 and 28: ");
					scanf("%d", &input.day);
				}
				if (input.day == 28)
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
					nextDay = input.day;

					nextDay++;
				}
			break;	
			}
		case 4: case 6: case 9: case 11:
			while (input.day < 1 || input.day > 30)
			{
				printf("\nEnter a day between 1 and 30: ");
				scanf("%d", &input.day);
			}
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
				nextDay = input.day;
				nextDay++;
			}
	}
	/* not applicable to part b
	while ((input.day < 1 )|| (input.day > 30))
	{
	printf("\nEnter a day (##)-->");
	scanf("%d", &input.day);
	}
	*/
	
	printf("\nYou have entered %02d/%02d/%04d, (DD/MM/YYYY).", input.day, input.month, input.year);
	

	printf("\nThe next day would be %02d/%02d/%04d.\n", nextDay, nextMonth, nextYear);
	return 0;
}