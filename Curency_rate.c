#include <stdio.h>

char *destination[] =  {"Iraqi Rial",
						"British Pounds",
						"Eurpoean Euros",
						"Canadian Dollars",
						"Mexican Pesos",
						"Japense Yen",
						"Kuwati Dinar"};

int main()
{

//Program discription
	printf("\n        ITS240 May 1st 2017 Final Project \n        Daniel Kuckuck & Mack Moore \n        Our Project is a curency exchange rate converter: \n        We take the amount in USD and convert it to \n        Pounds, Euros, Canadian Dollars, Mexican Pesos, or Japanese Yen. \n        We also display the highest and lowest conversion rates: \n        the Kuwati Dinar and the Iraqi Rial.\n\n");

//Variables
	void convert(int, float);
	int typeNum = 0;
	int again = 1;
	float usAmt = 0;
	

//start the program loop
	do{
		printf("Enter the number corresponding to the desired currency.\n 1 for Pounds. 2 for Euros. 3 for Canadian Dollars. 4 for Pesos. 5 for Yen.\n   >");
		scanf("%d", &typeNum);
		printf("Enter the amout of USD you wish to convert:\n   >");
		scanf("%f", &usAmt);
		printf("\n");

		
//Call conversion function		
		convert(typeNum, usAmt);

//Run again or quit
		printf("\nEnter 1 to perform another conversion. Enter any other number to exit\n");
		scanf("%d", &again);
	}
	while(again==1);

	return 0;
}

void convert(int typeTo, float usVal)
{
//Variables
	float rial;
	float dinar;
	float selectedAmt;
	float rate[6] = {0,
					 0.781676, 
					 0.934090, 
					 1.347161, 
					 18.872309, 
					 109.032624};

//File declaration and open
	FILE *saveFile = fopen("exchange.dat", "a+");

//highest and lowest conversion rates
	rial = usVal * 33475;
	dinar = usVal * 0.304610;

//User selected conversion rate	
	selectedAmt = usVal*rate[typeTo];
	
//Append conversions to file and close it
	fprintf(saveFile, "%.2f in %s to USD %.2f\n", selectedAmt, destination[typeTo], usVal);
	fclose(saveFile);
	
//Print conversions to screen
	printf("%.2f in %s is equivalent to the USD $%.2f.\n\nThe dinar equivalent is %.2f and \nthe rial equivalent is %.2f.\n", selectedAmt, destination[typeTo], usVal, dinar, rial);
	printf("\nAll conversion rates were accurate as of the April 19th, 2017.\nOur source for the rates was http://www.x-rates.com/table/?from=USD&amount=1\n");
	
	 ;
}
