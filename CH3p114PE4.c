/* 
ITS240-01 
Lab 01 
Ch3p114pe4 
01/18/2017 
Daniel Kuckuck

Program to calculate the distance in feet, of a trip that is 2.36 miles long. One mile is equal to 5,280 feet.
*/ 
#include <stdio.h>
int main()
{
	int trip, mile, distance;
	trip=236; /* defining miles multiplied by 100 - to not lose data*/
	mile=5280; /* Defining how many feet in a mile */
	printf("\nWe are calculating the distance in feet of a trip that is 2.36 miles\n");
	printf("A mile is %d feet.\n", mile);
	printf("So the trip would be 2.36 x 5280 feet,");
	distance = ((trip*mile)+50)/100; /* Actual calculation  */
	printf("\nwhich equals %d feet (rounded to the nearest foot).\n", distance);
	
	return 0;
}