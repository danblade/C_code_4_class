/* 
ITS240-01 
Lab 07 
Ch9p470pe4
03/31/2017 
Daniel Kuckuck
	Write a C program that accepts a name as first name last name and then displays the name as last name, first name. 
*/
#include <stdio.h>
#include <ctype.h>
#define MAX 35
int main()
{
	char srtName[MAX], strInverse[MAX];
	int split = -1, i = 0, endr = -1;
	printf("\nPlease enter a name, first then last -->");
	gets(srtName);
	printf("\nLast then first:");
	//puts(srtName);
	while((i < MAX) && (split < 0) && (srtName[i] != '\0'))
	 {
	 	if (isspace(srtName[i]) != 0)
			{
				split = i;
				//printf("\n in 1st while, char is %c", srtName[i]);
			}
		i++;
		//printf("\n char is %c", srtName[i]);
	 }
	 
	 //printf("\nfinished first while split is %d", split);
	 while((i < MAX) && (endr < 0) && (srtName[i] != '\0'))
	 {
	 	if ((isspace(srtName[i]) != 0) || (isalpha(srtName[i]) == 0) || (iscntrl(srtName[i]) != 0))
			{
				endr = i;
				//printf("\n char is %c, i is %d", srtName[i]), i;
			}
		i++;
		//printf("\nin2nd while char is %c", srtName[i]);
	 }
	 endr = i;
	 //printf("\nfinished second while; endr is %d", endr);
	 for (int j = split; j < endr; ++j)
	 {
	 	printf("%c", srtName[j]);
	
	 }
	 //printf("\nfinished first for");
	 printf(" ");
	 for (int k = 0; k < split; ++k)
	 {
	 	printf("%c", srtName[k]);
	
	 }
	 //printf("\nfinished second for");
	 printf("\n");
	return 0;
}

