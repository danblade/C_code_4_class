/* 
ITS240-01 
Lab 01 
Ch4p195pe2 
01/30/2017 
Daniel Kuckuck

Rewrite program 4.4 from page 180 using a switch statment.
*/ 
#include <stdio.h>

int main()
{
	/* Original code Program 4.4 on page 180
	
	using this */
	char marcode;
		printf("\nEnter a martial code: ");
	scanf("%c", &marcode);
	/* not using this
	if (marcode == 'M')
		printf("\nIndividual is married. \n");
	else if (marcode == 'S')
		printf("\nIndividual is single. \n");
	else if (marcode == 'D')
		printf("\nIndividual is divorced. \n");
	else if (marcode == 'W')
		printf("\nIndividual is widowed. \n");
	else
		printf("\nAn invalid code was entered. \n");

	/ End of original code. */
	switch (marcode)
	{
		case 'm': case 'M':
			printf("\nIndividual is married. \n");
		break;
		case 's': case 'S':
			printf("\nIndividual is single. \n");
		break;
		case 'd': case 'D':
			printf("\nIndividual is divorced. \n");
		break;
		case 'w': case 'W':
			printf("\nIndividual is widowed. \n");
		break;
		default:
			printf("\nAn invalid code was entered. \n");

	}
return 0;
	
}