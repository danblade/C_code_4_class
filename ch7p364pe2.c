/* 
ITS240-01 
Lab 06
Ch7p364pe2 
03/03/2017 
Daniel Kuckuck
	2 cups to a pint, 4 cups to a quart, 16 cups to a gallon
*/
#include <stdio.h>

int main()
{
	int startCups = 0, gallons = 0, quarts = 0, pints = 0, cups = 0;
	printf("\nPlease enter the number of cups to calculate: ");
	scanf("%d", &startCups);
	liquid(startCups, &gallons, &quarts, &pints, &cups);
	printf("\nYour amount %d, would be %d gallons, %d quarts, %d pints, and %d cups.\n", startCups, gallons, quarts, pints, cups);

	return 0;
}

int liquid(int num, int *gallons, int *quarts, int *pints, int *cups)
{
	int totalCups = num;
	*gallons = totalCups / 16;
	totalCups = totalCups - (*gallons * 16);
	*quarts = totalCups / 4;
	totalCups = totalCups - (*quarts * 4);
	*pints = totalCups / 2;
	totalCups = totalCups - (*pints * 2);
	*cups = totalCups;
	;
	return *gallons, *quarts, *pints, *cups;
}
 
