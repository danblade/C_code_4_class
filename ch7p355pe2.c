/* 
ITS240-01 
Lab 06
Ch7p355pe2 
03/1/2017 
Daniel Kuckuck
Write a C function named change() that accepts a single precision number & the addresses of integer variables named quaters, dimes, nickels, & pennies. The function should determine the number of each of these in the number passed to it and write these values directly into the respective variables declared in it's calling function.	
*/
#include <stdio.h>
int change(float num1, int *quarters, int *dimes, int *nickels, int *pennies)
{
	// figure out the number of coins
	int num2 = (int) (num1 *100.01);
	*quarters = num2 / 25;
	num2 = num2 - (*quarters * 25);
	*dimes = num2 / 10;
	num2 = num2 - (*dimes * 10);
	*nickels = num2 / 5;
	num2 = num2 - (*nickels * 5);
	*pennies = num2;
	;
	return 0;
}

int main()
{
	int quartersAmount = 0, dimesAmount = 0, nickelsAmount = 0, penniesAmount = 0;
	float num1;
	printf("\nEnter an amount to find how many coins and what coins compose that amount: \n");
	scanf("%f", &num1);

	change(num1, &quartersAmount, &dimesAmount, &nickelsAmount, &penniesAmount);
	printf("\nYour amount %.2f, would be %d quarters, %d dimes, %d nickels, %d pennies.", num1, quartersAmount, dimesAmount, nickelsAmount, penniesAmount);


	return 0;
}

