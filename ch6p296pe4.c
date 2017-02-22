/* 
ITS240-01 
Lab 01 
Ch6p296pe4 
02/13/2017 
Daniel Kuckuck
	Write a program to convert gallons to liters using 3.7854 liters to gallon.
*/
#include <stdio.h>

float gallonsToLiters(float gallons)
{
	float liters = 0.0;
	liters = gallons*3.7854;
	return liters;
}

int main()
{
	float gal = 0.0, result = 0.0;
	printf("\nPlease enter the number of gallons to find the liter equivalent--> ");
	scanf("%f", &gal);
	result = gallonsToLiters(gal);
	printf("\n%f liters\n", result);
	return 0;
}

