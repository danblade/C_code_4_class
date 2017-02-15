/* 
ITS240-01 
Lab 01 
Ch5p236pe8 
02/08/2017 
Daniel Kuckuck
	refer to the book: Book Identification #; Inventory Balance at begining of month; Number of copies receieved during the month; Number of copies sold during month. Use a while loop so only 3 books are requested. Output should be: 
	New Balance = Inventory at the beginning of the month
				+ Number of copies received during the month
				- Number of copies sold during the month

*/
#include <stdio.h>
#define MAXCOUNT 3
main()
{
//define variables
	int bookId = 0, invStart = 0, invAdd = 0, invSold = 0, count = 1;

	while (count <= MAXCOUNT)
	{
		printf("\nPlease enter your Book's identification number --> ");
		scanf("%d", &bookId);
		printf("\nPlease enter Book's starting inventory --> ");
		scanf("%d", &invStart);
		printf("\nPlease enter Books added to inventory --> ");
		scanf("%d", &invAdd);
		printf("\nPlease enter Books sold --> ");
		scanf("%d", &invSold);
		printf("\nID:%d New Balance: %d = inentory balance at the beginning of the month: %d.\n            + Number of copies received during the month: %d.\n            - Number of copies sold during the month: %d.\n", bookId, invStart + invAdd - invSold, invStart, invAdd, invSold);
		count++;
	}

return 0;
}

