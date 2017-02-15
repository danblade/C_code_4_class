/* 
ITS240-01 
Lab 01 
Ch4p177pe4 
01/25/2017 
Daniel Kuckuck

Senior sales $800 Junior $375. we are writing a program that accepts as input a sales's person's status in the character variable status. If status = 's', the senior person's salery displays, else the junior's salary displays.
Item b. how many runs should you make to verify that it is opperating correctly? What data should you input in each of the program runs?
*/ 
#include <stdio.h>
#include <math.h>
#define SENIORSALES 800      /* Define a magic # for the salaries*/
#define JUNIORSALES 375

int main()
{
	char status; /* Initalize our character variable "status" */

	printf("\nHello Sales person, please enter your status selection:\nUse s for Senior sales, or j for Junior sales --> ");
	scanf("%c", &status);
	printf("character entered: %c\n", status);
	if ((status == 's') || (status == 'S'))  /* char* uses double quotes """" and char uses single quotes "''"  I learned this from Jose. */
		{
			printf("\nYou have indicated that you are a Senior sales professional, \nyour salary is $%d\n", SENIORSALES);
		}	
	else
		{
			printf("\nYou have indicated that you are a Junior sales professional, \nyour salary is $%d\n", JUNIORSALES);
		}

return 0;
	
}