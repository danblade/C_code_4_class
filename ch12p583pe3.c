/* 
ITS240-01 
Lab 11
ch12p583pe3
04/18/2017 
Daniel Kuckuck
Write a C program that accepts a user-entered time in hours and minutes. Have the program calculate and display the time one minute later.
*/
#include <stdio.h>
#define MAX 51

int main()
{
	//Declare variables
	int milTime = -1;
	int minuteLater = 0;
	//User input with validation
	while ((milTime < 0 )|| (milTime > 2359))
	{
		printf("\nEnter the time in hours and minutes 0-2359 -->");
		scanf("%d", &milTime);
	}
	//Keep the time correct (military)
	if (milTime != 2359)
	{
		minuteLater =  milTime+1;	
	}
	else
		minuteLater = 0000;
	//display output
	printf("\nOne minute later would be %04d", minuteLater);
	return 0;
}