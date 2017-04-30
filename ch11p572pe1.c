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
	while ((day < 1) || (day > 7))
	{
		printf("\nPlease enter a number from 1 - 7 for the day you desire -->");
		scanf("%d", &day);
		printf("%d\n", day);
	}

	weekDisplay(day);
	//printf("\n");
	return 0;
}
void weekDisplay(int dayCount)
{
	char *weekday [] = {"Sunday",
						"Monday",
						"Tuesday",
						"Wednesday",
						"Thursday",
						"Friday",
						"Saturday"};
	dayCount--;
	printf("You have selected, %s\n", weekday[dayCount]);
	
	return;
}