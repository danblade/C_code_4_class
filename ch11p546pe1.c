/* 
ITS240-01 
Lab 10
ch11p546pe1
04/17/2017 
Daniel Kuckuck
Write a declaration to store the string “This is a sample” in an array named ‘samtest’. Include the declaration in a program that displays the values in samtest in a for loop that uses a pointer to access each element in the array. Part B. Modify the program to display only array elements 10 through 15 (these are the letters s, a, m, p, l, and e.
*/
#include <stdio.h>
#include <string.h>
#define MAX 51

int main()
{
	char show, samtest[] = {"This is a sample"};
	int strLength, strPtr;
	printf("\n\"%s\" is what is stored in the array samtest.\n",samtest );
	strLength = strlen(samtest);
	printf("\n");
	//Part B requires using characters from 10 - 15; but the normal is all of them from 0 to strLength.
	for (int i = 10; i < strLength; ++i)
	{
		//use the pointer for displaying the array
		printf("%c", *(samtest+i));
	}
	printf("\n");
	return 0;
}
