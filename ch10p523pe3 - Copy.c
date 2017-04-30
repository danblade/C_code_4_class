/* 
ITS240-01 
Lab 09 
Ch10p523pe3 
04/06/2017 
Daniel Kuckuck
	Create a function named setHolidays() that reads and displays the current list of holidays and then lets the user change, add, or delete holidays from the list. After a holiday has been modified, the function should sort the holidays and display a new list. Finally, the function should ask the user whether the new list should be saved; if the user responds affirmatively, the function should write the new data to the existing Holidays.txt file, overwriting the contents of the existing file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
int holidays[SIZE];  /*global holiday array */

int main()
{
	void setHolidays();
	//int count = 0;
	setHolidays();
	/* this needs to be in the other function:
	printf("\nThe holidays listed in our file are: \n");
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", holidays[i]);
	} */
	return 0;
}
void setHolidays()
{
	int mo, day, yr, j = 0;
	char del1, del2, edit = 'e';
	FILE *wrkFile;
	wrkFile = fopen("Holidays.txt", "r");
	if (wrkFile == NULL)
	{
		printf("\nFailed to open the file.\n");
		exit(1);
	}
	while (edit == 'e')  
	{
		while (fscanf(wrkFile, "%d%c%d%c%d", &mo, &del1, &day, &del2, &yr) != EOF)
		holidays[j++] = yr * 10000 + mo * 100 + day;
		printf("\nThis is what we currently have in our file:\n");
		fclose(wrkFile);
		for (int i = 0; i < j ; ++i)
		{
			printf("%d\n", holidays[i]);
		} 
		printf("\nWould you like to continue (e)diting or (s)ave or close\n");
		edit = getchar();
		if (edit == 's')
		{
			wrkFile = fopen("Holidays.txt", "w");
			for (int i = 0; i < j; ++i)
			{
				sprint(holidays[i], "%4d%2d%2d", yr, mo, day);
				fprintf(wrkFile, "%d/%d/%d", mo, day, yr);
			}
		}


	}

	
//	return j;
}