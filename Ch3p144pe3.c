/* 
ITS240-01 
Lab 01 
Ch3p144pe3 
01/18/2017 
Daniel Kuckuck
Use define statements.
*/ 

#include <stdio.h>
#define TEMPCHANGE 5.0
#define TEMPCHANGE1 9.0
#define TEMPCHANGE2 32.0
int main()
{
	float fahren, celsius;

   		/* Request temp from user */
	printf("\nEnter a temperature in degrees Fahrenheit: ");
	scanf("%f", &fahren);
	celsius = (TEMPCHANGE/TEMPCHANGE1) * (fahren - TEMPCHANGE2);
	printf("\nThe equivelent Celsius temperature is %5.2f.\n", celsius);

return 0;
}