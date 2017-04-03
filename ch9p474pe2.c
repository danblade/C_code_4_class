/* 
ITS240-01 
Lab 07 
Ch9p474pe2 
03/31/2017 
Daniel Kuckuck
	Write a C program that accepts three user-entered numbers as one strng. Once the strng has been accepted, have the program pass the strng and the addresses of three single-percision variables to a funtion called separate(). The separate() function should extract the three floating-point values from the passed strng and store them useing the passed addresses.
	Now display the input strng using the format "6.2f %6.2f %6.2f".
*/
#include <stdio.h>
#define MAX 3
main()
{
	//prototype function
	void separate(int[], float *, float *, float *);
	//define variables
	int strng[MAX];
	float varOne = 0, varTwo = 0, varThree = 0;
	//Get user input
	printf("\nPlease enter your desired numerical values -->");
 	scanf("%d %d %d", &strng[0], &strng[1], &strng[2]);
	/* Checking 
	for (int i = 0; i < MAX; ++i)
	 {
	 	printf("%d ", strng[i]);
	
	 } */ 
	//Call our separating function
	separate(strng, &varOne, &varTwo, &varThree);
	//pe2 display the user input
	printf("\nYour values: %6.2f, %6.2f, %6.2f", varOne, varTwo, varThree);
	return 0;
}

void separate(int flstrng[], float *varOne, float *varTwo, float *varThree)
{
	/*checking
	for (int i = 0; i < MAX; ++i)
	 {
	 	printf("%d ", flstrng[i]);
	 }*/ 
	*varOne = flstrng[0];
	*varTwo = flstrng[1];
	*varThree = flstrng[2];
	//checking: printf("%f %f %f", *varOne, *varTwo, *varThree);
}