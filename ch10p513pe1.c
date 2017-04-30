/* 
ITS240-01 
Lab 09 
Ch10p513pe1
04/05/2017
Daniel Kuckuck
Write a C function named fcheck() that checks whether a file exists. The function should be passed a filename. If the file eists, the function sould return a value of 1; otherwise the function should return a value of 0.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
main()
{
	//prototype function
	int fcheck(char[]);
	//define variables
	char strng[MAX];
	int result;
	//Get user input
	printf("\nPlease enter your desired file to check if it exists \n(suggested file name: 509_pe5_txt.dat) -->");
 	gets(strng);
	result = fcheck(strng);
	switch (result)
	{
		case 0:
		printf("\nYour file %s is not present.\n", strng);
		break;
		case 1:
		printf("\nYour file %s is present.\n", strng);
		break;
	}
	return 0;
}

int fcheck(char flstrng[])
{
	printf("%s\n", flstrng);
	int fileExist = 0;
	FILE *inFile;
	inFile = fopen(flstrng, "r");
	if (inFile == NULL)
	{
		fileExist = 0;
		printf("\nPlease check the file name: %s does not exist.\n", flstrng);
		exit(1);
	}
	else
	{
		fileExist = 1;
	}
	fclose(inFile);
	return fileExist;
}