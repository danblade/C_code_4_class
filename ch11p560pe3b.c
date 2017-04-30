/* 
ITS240-01 
Lab 10 
Ch11p560pe3 
04/18/2017 
Daniel Kuckuck
	Write a C program that includes a declaration in main() that stores the string "Vaction is near" in an array named 'message'. Include a function call to display() that accepts message in a parameter named 'strng' and then displays the message using the pointer notation '*(strng + i)'. Part B: Modify the display() function to alter the address in message. Use the expression *strng rather than *(strng + i) to retrieve the correct element.
*/
#include <stdio.h>
#define MAX 16
main()
{
	//prototype function
	void display(char[]);
	//define variables
	char message[] = {"Vaction is near"};
	//Call our function
	display(message);
	
	return 0;
}

void display(char strng[])
{
	//strLength = strlen(samtest);
	printf("\n");
	for (int i = 0; *(strng+i) != '\0'; i++)
	{
		*strng = strng[i];
		//use the pointer for displaying the array
		printf("%c", *strng);
	}
	printf("\n");
	return;
}