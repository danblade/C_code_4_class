/* 
ITS240-01 
Lab 08 
Ch9p480pe5 
03/31/2017 
Daniel Kuckuck
	Write a function to count the number of lines entered. (You will not be able to use gets becuase gets ends when a newline character is entered.)
*/
#include <stdio.h>
int getline(char []);
#define LSIZE 81

int main()
{
	int lines = 0, endRun = 0;
	char message[LSIZE];
	printf("\nEnter a string (to exit type a space and press Enter): ");
	while ((message[0] != '\0') && (endRun == 0))
	{
		endRun	= getline(message);
		lines++;
	}
	printf("\n\nThe numbers of lines used for this string was: %d.\n", lines);
	return 0;
}
int getline(char strng[])
{
	int i = 0, count = 0, emptyStr = 0;
	char c = 0;
	while(i < (LSIZE-1) && (strng[i++] = getchar()) != '\n')
		count++;
	strng[i] = '\0';
	if (strng[0] == ' ')
	{
		emptyStr = 1;
	}
	return(emptyStr);
}