/* 
ITS240-01 
Lab 01 
Ch6p285pe3 
02/13/2017 
Daniel Kuckuck
	Write a program that 
	*/
#include <stdio.h>

float Mult(float num3, float num4)
{
	
	// debugging printf("%d num3, %d num4", num3, num4);
	float result2 = 0.0;
	result2 = num3 * num4;
	// debugging printf("\n%f result2\n", result2);
	// debugging printf("%d num3, %d num4", num3, num4);
	return result2;
}

int main()
{
	float num1 = 0.0, num2 = 0.0;
	int result = 0.0;
	printf("\nEnter a number to multiply --> ");
	scanf("%f", &num1);
	printf("\nEnter a second number to multiply --> ");
	scanf("%f", &num2);
	result = Mult(num1, num2);

	printf("\n%.2f final result\n", Mult(num1, num2));

	return 0;
}

