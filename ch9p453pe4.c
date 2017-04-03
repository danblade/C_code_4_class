/* 
ITS240-01 
Lab 07 
ch9p453pe4
03/29/2017 
Daniel Kuckuck
Write a C program that accepts a string of characters from a terminal and displays the hexidecimal eqivalent of each character.
*/
#include <stdio.h>
#define MAX 51

int main()
{
	//Declare variables
	char strValue[MAX];
	//Tell are usser what is expected
	printf("\nPlease enter some characters to see what their hexidecimal equivalant is -->");
	//get the user input in the string
	gets(strValue);
	//return to the user what was input
	printf("\nYou entered:");
	puts(strValue);
	printf("\nWhich is the samwe as the following in hexidecimal:\n");
	//display the hex values
	for (int i = 0; i < MAX; ++i)
	{
		printf("%x "), strValue[i];
	}
	return 0;
}