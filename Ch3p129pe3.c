/* 
ITS240-01 
Lab 01 
Ch3p129pe3 
01/21/2017 
Daniel Kuckuck

"Enter the length of the room:"
"Enter the width of the room:"
use scanf() to get the keyboard inputs and calculate the area (a=l*w).
Manually calculate to check.
*/ 
#include <stdio.h>

int main()
{
	int length, width, area;

	/* Request room size from user */
	printf("\nEnter the length of the room: (number value only)\n");
	scanf("%d", &length);
	printf("\nEnter the width of the room: (number value only)\n");
	scanf("%d", &width);

	area = length * width; /* find the area*/
	/* display the area*/
	printf("\nThe area of the room is %d sqft.\n", area);

	return 0;
}