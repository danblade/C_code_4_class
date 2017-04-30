/* 
ITS240-01 
Lab 10
ch11p546pe1
04/17/2017 
Daniel Kuckuck
Write a C program that stores the following numbers in an array named ‘miles’: 15, 22, 16, 18, 27, 23, 20. Have your program copy the data stored in miles to another array named ‘dist’ and then display the values in the dist array.
*/
#include <stdio.h>

int main()
{
	int miles[] = {15, 22, 16, 18, 27, 23, 20}, dist[7];
	//strncpy(dist, miles, 8);
	for (int j = 0; j < 7; ++j)
	{

		dist[j] = miles[j];
	}
	for (int i = 0; i < 7; ++i)
	{
		printf("%d ", dist[i]);
	}
	printf("\n");
	return 0;
}