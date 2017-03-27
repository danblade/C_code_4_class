/* 
ITS240-01 
Lab 06
Ch7p355pe5 
02/13/2017 
Daniel Kuckuck
	Replace the calc() function used in Program 7.8 (page 353) witte functions named computeSum() & computeProduct. The computeSun() function shouldcalculate and directly return the sum of 3 values passed to it, while the computeProduct() function should calculate and directly return the product of the 3 values passed to it.
*/
#include <stdio.h>
float sumaddr, prodaddr;
main()
{
	float computeSum(float *, float *, float *);
	float computeProduct(float *, float *, float *);
	float firstnum, secnum, thirdnum;

	printf("\nEnter three numbers: ");
	scanf("%f %f %f", &firstnum, &secnum, &thirdnum);
	computeSum(&firstnum, &secnum, &thirdnum);
	computeProduct(&firstnum, &secnum, &thirdnum);

	printf("\nThe sum if the entered numbers is: %6.2f", sumaddr);
	printf("\nThe product of the entered numbers is: %6.2f\n", prodaddr);

	return 0;
}

float computeSum(float *firstnum, float *secondnum, float *thirdnum)
{
	sumaddr = *firstnum + *secondnum + *thirdnum;
	return (sumaddr);
}
float computeProduct(float *firstnum, float *secondnum, float *thirdnum)
{
	prodaddr = *firstnum * *secondnum * *thirdnum;
	return (prodaddr);
}

