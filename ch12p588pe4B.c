/* 
ITS240-01 
Lab 11
Ch12p588pe4 
04/18/2017 
Daniel Kuckuck
Declare a single structure type suitable for a car record consisting of an integer car identification number, an integer value for miles driven by the car, and integer value for the number of gallons used by each car. 
Part B: using the predeclared structure type, write a program that interactively accepts the following data into an array of five structures:
Car number 		Miles Driven 	Gallons Used
25				1450			62
36				3240			136
44				1792			76
52				2360			105
68				2114			67	
*/
#include <stdio.h>
struct records
{
	int id;
	int miles;
	int gallons;
};

int main()
{
	int miles = 0, fuel = 0;
	float average = 0, aveTwo;
	struct records info[5] = {{25, 1450, 62}, {36, 3240, 136}, {44, 1792, 76}, {52, 2360, 105}, {68, 2114, 	67}};	
	for(int i = 0; i < 5; i++)
	{
		printf("Car #%d, miles:%d, Gallons used:%d. Average mpg is %d.\n", info[i].id, info[i].miles, info[i].gallons, info[i].miles/info[i].gallons);
		average = average + (info[i].miles/info[i].gallons);
	}
	
	printf("Average mpg is %.2f.", average/5);
	return 0;
}
