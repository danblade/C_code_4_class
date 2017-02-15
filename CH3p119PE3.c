/* 
ITS240-01 
Lab 01 
Ch3p119pe3 
01/18/2017 
Daniel Kuckuck

Heron's formula is based on a triangle with sides a, b, and c: area = sqrt(s*(s-a)*(s-b)*(s-c)), where s=(a+b+c)/2.
Using Heron’s formula, make a program that calculates and displays the area of a trianlge having sides of 3, 4, and 5.
*/ 
#include <stdio.h>
#include <math.h> 

int main()
{
	int side1, side2, side3, allSidesDiv2, area; /* initialize our integer variables */
	side1=3; /* Define our variables */
	side2=4;
	side3=5;
	printf("\nUsing Heron's formula we are going to find the area of a\ntriangle with the sides of %d, %d, and %d \n", side1, side2, side3);
	printf("Heron\'s formula is area = sqrt(s*(s-a)*(s-b)*(s-c)),\nwhere s=(a+b+c)/2.\n\n"); /* I love how you escape the restricted characters */
	allSidesDiv2=(side1+side2+side3)/2; /* define allSidesDiv2 or, s and perform our calculation for s */
	printf("Our triangle calcuates s=(%d+%d+%d)/2 so s=%d.\n", side1, side2, side3, allSidesDiv2); 
	area=sqrt((allSidesDiv2-side1)*(allSidesDiv2-side2)*(allSidesDiv2-side3)); /*defining area and working our final calculation */
	printf("The area then is, sqrt((%d-%d)*(%d-%d)*(%d-%d) \nwhich equals %d sqft.\n", allSidesDiv2, side1, allSidesDiv2, side2, allSidesDiv2, side3, area); /* I used the variables so that if I need to I can use the code again */

	return 0;
}