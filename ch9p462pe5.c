/* 
ITS240-01 
Lab 08 
ch9p462pe5 
03/29/2017 
Daniel Kuckuck
Write a C function named chartype() that determines the ASCII type of any integer in the range 0 to 127. If the number represents a printable ascii character, print the character with one of the following appropriate messages.
	The ASCII character is a lowercase letter.
	The ASCII character is an uppercase letter.
	The ASCII character is a digit.
	The ASCII character is a punctuation mark.
	The ASCII character is a space.
If the ASCII character is a nonprintable character, display its ASCII code in decimal format and the message The ASCII character is a nonprintable character. 
Write a simple main() function to test the function written above. The main() function should generate 20 random numbers in the range 0 to 127 and call chartype() for each generated number.
*/
#include <stdio.h>
#include <ctype.h>
#include <time.h>
int main()
{
	void chartype(char);
	char usrInput;
	int count = 127;
/* Part a
	printf("\nPlease enter a character -->");
	scanf("%c", &usrInput);
/ end of part a begin part b */
for (int i = 0; i < count; ++i)
	{
		

	srand(time(NULL));
	usrInput = rand() % 127 +i;
	printf("\n%d", usrInput);
	chartype(usrInput);
	}
	return 0;
}


void chartype(char passedValue)
{
	 if (isalpha(passedValue) != 0)
	 {
	 	if (isupper(passedValue) != 0)
	 	{
	 		printf("\nThe ASCII character is an uppercase letter, %c", passedValue);
	 	}
	 	else
	 	{
	 		printf("\nThe ASCII character is a lowercase letter, %c", passedValue);	
	 	}
	 }
	 else if (isdigit(passedValue) != 0)
	 {
	 	printf("\nThe ASCII character is a digit, %c", passedValue);
	 }
	 else if (ispunct(passedValue) != 0)
	 {
	 	printf("\nThe ASCII character is a punctuation mark, %c", passedValue);
	 }
	 else if (isspace(passedValue) != 0)
	 {
	 	printf("\nThe ASCII character is a space, %c", passedValue);
	 }
	 else
	 	printf("\nThe ASCII character is a nonprintable character, %c", passedValue);
}