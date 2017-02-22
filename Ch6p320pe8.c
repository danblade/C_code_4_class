/* 
ITS240-01 
Lab 01 
Ch6p320pe8 
02/13/2017 
Daniel Kuckuck
	Write a program to simulate two dice. If the total of the two dice is 7 or 11, you win otherwise, you lose. Embelish...!
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll1 = 0, roll2 = 0;
int diceRoll()
{
	srand(time(NULL));
	roll1 = rand() % 6 + 1;
	roll2 = 1 + (int) (rand() %  6);
	return roll1, roll2;
}
int main()
{
	int dieOne = 0, dieTwo = 0, total = 0;
	dieTwo = diceRoll(roll2);
	dieOne = roll1;
	total = dieOne + dieTwo;
	printf("\nYour first die rolled, %2d.",dieOne);
	printf("\nYour second die rolled, %d.",dieTwo);
	if ((total == 7) || (total == 11))
	{
		printf("\nYou rolled a combined total of %d.\nYou WIN!\n", total);
	}
	else
		printf("\nYou rolled a combined total of %d. \nYou LOSE!\n", total);
	return 0;
}

