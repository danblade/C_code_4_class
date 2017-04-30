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
/*struct Date
{
	int day;
	int month;
	int year;
}; Wrong assaignment
*/
int main()
{
	void weekDisplay(int);
	int day = 0;
	printf("\nPlease enter a number from 1 - 7 for the day you desire -->");
	scanf("%d", &day);

	weekDisplay(day);
	//printf("\n");
	return 0;
}
void weekDisplay(int day)
{
	switch (day)
	{
	case 1:
	printf("Sunday");
	return;
	case 2:
	printf("Monday");
	return;
	case 3:
	printf("Tuesday");
	return;
	case 4:
	printf("Wednesday");
	return;
	case 5:
	printf("Thursday");
	return;
	case 6:
	printf("Friday");
	return;
	case 7:
	printf("Saturday");
	return;
	default:;
	}
	return;
}