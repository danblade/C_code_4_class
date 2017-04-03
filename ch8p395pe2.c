/* 
ITS240-01 
Lab 07 
ch8p395pe2
inclass 2
03/06/2017 
Daniel Kuckuck

*/
#include <stdio.h>

main()
{
	//prototype function
	void show(float[], int);
	//define array
	float rates[] = {6.5,8.2,8.5,8.3,8.6,9.4,9.6,9.8,10.0};
	show(rates,9);
	return 0;
}

void show(float flRateList[], int size)
{
	int i = 0;
	for (i = 0; i < size ; ++i)
	{
		printf("%.1f\n", flRateList[i]);
	}
}