/* 
ITS240-01 
Lab 09 
ch10p496pe5
05/04/2017 
Daniel Kuckuck
Write individual declaration and open statements to link the following external data filenames to their corresponding internal names. Note that all files are binary, not text.
External names 		Internal Name 		Mode
coba.mem			memo				binary and output
coupons.bnd			coupons 			binary and append
prices.dat 			priFile				binary and input
*/
#include <stdio.h>
#define MAX 51

int main()
{
	//Declare variables
	FILE *memo = fopen("coba.mem", "wb");
	FILE *coupons = fopen("coupons.bnd", "ab");
	FILE *priFile = fopen("prices.dat", "rb");
	fclose(memo);
	fclose(coupons);
	fclose(priFile);
	return 0;
}