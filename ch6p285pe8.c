/* 
ITS240-01 
Lab 01 
Ch6p285pe8 
02/13/2017 
Daniel Kuckuck
	Write a program that 
	*/
#include <stdio.h>

int Mult(int num3)
{
	
 	//printf("%d num3", num3);
	int result2 = 0;
	result2 = num3 % 2;
	// debugging printf("\nn%d result2\n", result2);
	// debugging printf("%d num3, %d num4", num3, num4);
	if (result2 == 0)
	{
		printf("\nFinal result your number is even\n");
	}
	else
	printf("\nFinal result your number is odd\n");

	return result2;
}

int main()
{
	int num1 = 0;
	
	printf("\nEnter a number to see if it is even or odd --> ");
	scanf("%d", &num1);
	Mult(num1);
	
	return 0;
}

