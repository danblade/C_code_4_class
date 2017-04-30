/* 
ITS240-01 
Lab 09 
ch9p462pe5 
04/04/2017 
Daniel Kuckuck
Create a file containing the data (named p504pe5.dat):
H.Baker		614 Freeman St.		Orange		NJ
D.Rosso		83 Chambers St.		Madison		NJ
K.Tims		891 Ridgewood Rd.	Madison		NJ
B.Williams	24 Tremton Ave.		Brooklyn	NY
Write a program to read and display the data using the following format:

Name:
Address:
City, State:
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char fileName[20] = "p504pe5.dat";
	char objName[13], objAddress[6], objCity[11], objState[5], objAddressB[11], objAddressC[6];
	FILE *wrkFile;
	wrkFile = fopen(fileName,"r");
	if (wrkFile == NULL)
	{
		printf("\nFailed to open the p504pe5.dat file!\n");
		exit(1);
	}
	while(fscanf(wrkFile, "%s %s %s %s %s %s", objName, objAddress, objAddressB, objAddressC, objCity, objState) != EOF)
		printf("\n%s\n%s %s %s\n%s, %s\n", objName, objAddress, objAddressB, objAddressC, objCity, objState);
	fclose(wrkFile);

	return 0;
}