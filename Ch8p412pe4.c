/* 
ITS240-01 
Lab 07 
Ch8p412pe4 
03/25/2017 
Daniel Kuckuck	
Write a c function that finds and displays the maximum value in a two-dimensional array of integers. The array should be declared as a 10-row-by-20-column array of integers in main(), and the starting address of the array should be passed to the funtion.
part b - Not required!
Modify the function so that it also displays the row and column number of the element with the maximum value.
part c - Not required!
Can the funtion you wrote be generalized to handle any sive two dimensional array?
*/
#include <stdio.h>
#define ROWS 10
#define COLS 20
void displayMax(int arrayOne[ROWS][COLS]); //prototype function

main()
{	//declare our array
	int val[ROWS][COLS] = {{4, 6, 7, 43, 56, 23, 4, 5, 4, 37, 79, 2, 5, 55, 6, 3, 5, 7, 8, 34}, 
		{4, 5, 5, 6, 7, 8, 6, 4, 6, 7, 43, 56, 23, 4, 5, 4, 3, 7, 9, 2}, 
		{5, 5, 6, 3, 5, 7, 8, 3, 4, 1, 4, 5, 5, 6, 7, 8, 6, 4, 6, 7}, 
		{43, 56, 23, 4, 5, 4, 3, 7, 9, 2, 5, 5, 6, 3, 5, 7, 8, 3, 4, 14},
		{4, 5, 5, 6, 7, 8, 6, 4, 6, 7, 43, 56, 23, 4, 5, 4, 3, 7, 9, 2}, 
		{5, 5, 6, 3, 5, 7, 8, 3, 4, 1, 4, 5, 5, 6, 7, 8, 6, 4, 6, 7}, 
		{4, 5, 5, 6, 7, 8, 6, 4, 6, 7, 43, 56, 23, 4, 5, 4, 3, 7, 9, 2}, 
		{5, 5, 6, 3, 5, 7, 8, 3, 4, 1, 4, 5, 5, 6, 7, 8, 6, 4, 6, 7}, 
		{5, 5, 6, 3, 5, 7, 8, 3, 4, 1, 4, 5, 5, 6, 7, 8, 6, 4, 6, 7}, 
		{43, 56, 23, 4, 5, 4, 3, 7, 9, 2, 5, 5, 96, 3, 5, 7, 8, 3, 4, 14}};

	displayMax(val); // call the fucntion

	return 0;
}

void displayMax(int nums[ROWS][COLS]) // Function for finding max and displaying
{
	int i = 0, maxVal = 0, max = nums[0][0];
//Find max value
	for (i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; ++j)
		if (maxVal < nums[i][j])
			maxVal = nums[i][j];
		// printf("\nmaxVal = %d", maxVal); //For checking
	}

	printf("\nThe maximum value is %d.", maxVal);
	printf("\nFrom our array:\n");
//Display array
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			printf("%3d", nums[i][j]);
		}
		printf("\n");
	}

}

