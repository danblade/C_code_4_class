/* 
ITS240-01 
Lab 06
Ch7p369pe4 
03/03/2017 
Daniel Kuckuck
	
*/
#include <stdio.h>

main()
{
	int n, result;
	int factorial(int);

	printf("\nEnter a number: ");
	scanf("%d", &n);
	result = factorial(n);
	//printf("\nThe factorial of %d and %d\n", n, result);

	return 0;
}

int factorial(int n)
{
	if (n == 1)
	{
		printf("ar1\n");
		return (1);
	}
	else
	{
		printf(" ar%d,", n);
		return (n * factorial(n-1));
	}
}