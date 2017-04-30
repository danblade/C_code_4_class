/* 
ITS240-01 
Lab 10 
Ch11p563pe7
04/18/2017 
Daniel Kuckuck
	Write a program using the getchar(), toUpper(), and putchar() library functions that echo back each letter entered in its uppercase form. The program should terminate when the 1 key is pressed.	
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
	  char str[10];
   int ch, n = 0;
   printf("\n Enter a letter or 1 to exit -->\n");
   while ((ch = getchar()) && n < 1 && ch >= 'a' && ch <= 'z'|| (ch = getchar()) && n < 1 && ch >= 'A' && ch <= 'Z') {
      	str[n] = ch;
      	++n;
   		for (int i = 0; i < n; ++i)
    	  	putchar(toupper(str[i]));
   }
   

	return 0;
}