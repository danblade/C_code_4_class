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
	long int usrInput;
	char del1, del2, charInput[200], charFile[SIZE], holidayWrite[250];
	FILE *wrkFile;
	wrkFile = fopen("Holidays.txt", "r");
	if (wrkFile == NULL)
	{
		printf("\nFailed to open the file.\n");
		exit(1);
	}
	
	while (fscanf(wrkFile, "%d%c%d%c%d", &mo, &del1, &day, &del2, &yr) != EOF)
	//sprintf(holidayWrite[j++], "%d/%d/%d", mo, day, yr);
	holidays[j++] = yr * 10000 + mo * 100 + day;
	printf("\nThis is what we currently have in our file:\n");
	fclose(wrkFile);
	for (int i = 0; i < j ; ++i)
		{
			printf("%d\n", holidays[i]);
		}
	printf("\nIf you would like to add a holiday please type it in here -->");
	scanf("%ld", &usrInput);
	itoa(usrInput, charInput,10);
	//printf("%s\n",charInput );
	//itoa(holidays, charFile, 10);
	//printf("%d\n",charFile );
	wrkFile = fopen("Holidays.txt", "w");
	for (int i = 0; i < j ; ++i)
		{0
			fprintf(wrkFile, "%d\n",holidays[i]);
		}
	fprintf(wrkFile, "%s\n", charInput);

	while (fscanf(wrkFile, "%d/%d/%d", &mo, &day, &yr) != EOF)
	//holidays[j++] = yr * 10000 + mo * 100 + day;
	//printf("\nThis is what we currently have in our file:\n");
	fclose(wrkFile);
	printf("\n");
	for (int i = 0; i < j ; ++i)
		{
			printf("%d\n", holidays[i]);
		}
	printf("%s\n", charInput);
//	return j;
}