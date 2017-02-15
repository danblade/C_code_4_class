/* 
ITS240-01 
Lab 01 
Ch2p75pe3 
01/11/2017 
Daniel Kuckuck
*/ 
#include <stdio.h>

int main()
{
	float result; 
		/* Float is where the 
		returned calculation is in the format 
		of resulting integers followed by 6 zeros 
		after the decimal point.
		(Also know as a double variable and )*/ 
	
	result = 3.0*5.0;
	printf("\nThe result is %f\n", result);
	result = 7.1*8.3-2.2;
	printf("The result is %f\n", result);
	result =3.2/(6.1*5);
	printf("The result is %f\n", result);	
		/*  This code is actually very bad in that the variable is reused.
		There should instead, be a variable used for each result. */
	
	return 0;
}