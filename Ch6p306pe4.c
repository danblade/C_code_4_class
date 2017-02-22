/* 
ITS240-01 
Lab 01 
Ch6p306pe4 
02/15/2017
Daniel Kuckuck
	Write a program to determine the wining % of the 1927 New York Yankees 110 wins 44 losses & 1955 Brooklyn Dodgers 98 wins 55 losses.
*/
#include <stdio.h>
int winPercent(int wins, int losses)
{
	float winingPercentage = 100 * wins / (wins + losses);
	return winingPercentage;
}
int main()
{
	int win = 110, lose = 44; /* 1927 Yankees  */
	float winPercent2 = 0.0;
	printf("\nThis program figures the win percentage of the 1927 New York Yankees & the 1955 Brooklyn Dodgers.\n");
	winPercent2 = winPercent(win, lose);
	printf("\n1927 Yankees won %.2f", winPercent2);
	win = 98, lose = 55; /* 1955 Dodgers  */
winPercent2 = winPercent(win, lose);
	printf("\n1955 Dodgers won %.2f\n", winPercent2);
	return 0;
}

