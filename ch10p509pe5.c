/* 
ITS240-01 
Lab 10 
Ch10p509pe5
04/04/2017 
Daniel Kuckuck
Write a C funtion named readBytes() that reads and displays n characters starting from any position in a file. The function should accept three arguments: a file pointer, the offset of the first character to be read, and the number of characters to be read.
Modify the readBytes() function to store the characters read into a string or an array. The function should accept the address of the storage area as a fourth argument.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 35
int main()
{
	void readBytes(FILE *, long int, long int);
	FILE *myFile;
	long int offset, size;
	myFile = fopen("509_pe5_txt.dat", "r");
	if (myFile == NULL)
	{
		printf("\nFailed to open the 509_pe5_txt file!\n");
		exit(1);
	}
	printf("Please enter the offset: \n");
	scanf("%ld", &offset);
	printf("Please enter the size: \n");
	scanf("%ld", &size);
	readBytes(myFile, offset, size);
	fclose(myFile);
	return 0;
}

void readBytes(FILE *myFile, long int offset, long int charsRead)
{
	char ch;
	for(long int i = offset; i < offset+charsRead; i++)
	{
		fseek(myFile, i, SEEK_SET);
		char ch = getc(myFile);
		printf("%c", ch);
	}
}
