/* 
ITS240-01 
Lab 01 
Ch5p256pe8 
02/08/2017 
Daniel Kuckuck
	Write a program that figures gift doubling upto $1000 starting on a 12th (birthday).
*/
#include <stdio.h>

main()
{
	printf("\nThis program figures out how much money a girl receives \nfrom her parents for her birthday and displays her age at that time. \n(Money is doubled every year from $10 to $1000; her age starts at 10.\n");
	/* Set Variable*/
	int age = 12, gift = 10, total = 10;
	while (gift <= 2000)
	{
		printf("\nBirthday number %d, amount $%d for a total given of $%d.", age, gift, total);
		age++;
		gift = gift * 2;
		total = total + gift;

	}
	printf("\n");
	return 0;
}

