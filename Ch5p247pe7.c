/* 
ITS240-01 
Lab 01 
Ch5p247pe7 
02/08/2017 
Daniel Kuckuck
	Write a program to figure out the depreciation of a device. $28k at $4k annually for 7 years.
*/
#include <stdio.h>
#define DEPRECIATION 4000
#define MAXYEAR 7
#define PRICE 28000
main()
{
// Variables
	int year = 1, endYearValue = 0, accumulatedDep = 0;
	printf("           DEPRECIATION SCHEDULE\n");
	printf("           ---------------------\n\n");
	printf("                      END-OF-YEAR  ACCUMULATED\n");
	printf("YEAR  DEPRECIATION      VALUE      DEPRECIATION\n");
	printf("----  ------------  -------------  ------------\n");
	while (year <= MAXYEAR)
	{
		accumulatedDep =  accumulatedDep + DEPRECIATION;
		endYearValue = PRICE - accumulatedDep;
		printf("%2d %11d %15d %13d\n", year, DEPRECIATION, endYearValue, accumulatedDep);
		year++;
	}
	return 0;
}

