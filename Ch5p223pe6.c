/* 
ITS240-01 
Lab 01 
Ch5p223pe6 
02/07/2017 
Daniel Kuckuck
	Write a program that displays the distance driven every half hour until the end of the trip. (The variable given is 55 mph for 4 hours.)
*/
#include <stdio.h>
int main()
{
// define variables
	float distance, i, mph, time, traveledHalfHour;
// intitalize variables

	mph = 0;
	time = 0;
	distance = 0;
	traveledHalfHour = 0;

	printf("\nThis program calculates the distance traveled and displays the distance reached at every half hour until the end of the trip.\n");
	printf("\nPlease enter the average speed (in mph) --> ");
	scanf("%f", &mph);
	printf("\nNow, enter the time traveled (in hours) --> ");
	scanf("%f", &time);
// figure up distance traveled
	distance = (mph * time);
	printf("\nYou entered, %.2f mph.\nYou entered, %.2f hours.\nFor a total distance traveled of %.2f miles.\n", mph, time, distance);
// Run a loop that displays the distance every half hour until the end of the trip.
	traveledHalfHour = distance/(2*(distance/mph));
	i = traveledHalfHour;

	while (i <= distance )
	{

		printf("\nDistance traveled in half hour: %.2f", i);
		i = i + traveledHalfHour;
	}

	printf("\n\nTotal distance traveled at %.2f mph, \nover the course of %.2f hours was %.2f miles.\n", mph, time, distance);
	return 0;
}

