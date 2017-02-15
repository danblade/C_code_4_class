/* 
ITS240-01 
Lab 01 
Ch3p148pe5 
01/22/2017 
Daniel Kuckuck

Display the fourth root of a number entered by a user. (The fourth root can be found by raising ¼ power). Verify your program by calculating 81, 16, 1, 0.
Once your program is correct find the fourth root of 42, 121, 256, 587, 1240, 16256.
*/ 
#include <stdio.h>
#include <math.h>
#define ROOTPOWER .25      /* Define a magic # for the root power*/

int main()
{
	float numToCompute, computedRoot, verify1, verified1, verify2, verified2, verify3, verified3, verify4, verified4;
	float findRoot1, foundRoot1, findRoot2, foundRoot2, findRoot3, foundRoot3, findRoot4, foundRoot4, findRoot5, foundRoot5, findRoot6, foundRoot6;
	/* verification */
	verify1 = 81;
	verify2 = 16;
	verify3 = 1;
	verify4 = 0;
	verified1 = pow(verify1,ROOTPOWER);
	verified2 = pow(verify2,ROOTPOWER);
	verified3 = pow(verify3,ROOTPOWER);
	verified4 = pow(verify4,ROOTPOWER);

	printf("\nThis program computes the fourth root value of the number entered. \nHere are a few examples: \n 	%2.0f, it's fourth root %2.0f \n 	", verify1, verified1);
	printf("%2.0f, it's fourth root %2.0f \n 	", verify2, verified2);
	printf("%2.0f, it's fourth root %2.0f \n 	", verify3, verified3);
	printf("%2.0f, it's fourth root %2.0f \n", verify4, verified4);
	/* verification end */

	printf("\nEnter a number to find it's fourth root: "); /* Request number from user */
	scanf("%f", &numToCompute); 	/* get the number from user */
	computedRoot = pow(numToCompute,ROOTPOWER);
	printf("\nThe fourth root of your number, %5.2f is: %6.3f.\n", numToCompute, computedRoot);

	/* requested #s */
	findRoot1 = 42;
	findRoot2 = 121;
	findRoot3 = 256;
	findRoot4 = 587;
	findRoot5 = 1240;
	findRoot6 = 16256;
	foundRoot1 = pow(findRoot1,ROOTPOWER);
	foundRoot2 = pow(findRoot2,ROOTPOWER);
	foundRoot3 = pow(findRoot3,ROOTPOWER);
	foundRoot4 = pow(findRoot4,ROOTPOWER);
	foundRoot5 = pow(findRoot5,ROOTPOWER);
	foundRoot6 = pow(findRoot6,ROOTPOWER);

	printf("\nThese numbers are the numbers requested in the Lab item (CH3P148PE5)\n 	%5.0f, it's fourth root %5.2f \n 	", findRoot1, foundRoot1);
	printf("%5.0f, it's fourth root %5.2f \n 	", findRoot2, foundRoot2);
	printf("%5.0f, it's fourth root %5.2f \n 	", findRoot3, foundRoot3);
	printf("%5.0f, it's fourth root %5.2f \n 	", findRoot4, foundRoot4);
	printf("%5.0f, it's fourth root %5.2f \n 	", findRoot5, foundRoot5);
	printf("%5.0f, it's fourth root %5.2f \n ", findRoot6, foundRoot6);
	/*requested #s end */

return 0;
	
}