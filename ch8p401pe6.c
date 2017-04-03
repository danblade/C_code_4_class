/* 
ITS240-01 
Lab 07 
Ch8p401pe6 
03/22/2017 
Daniel Kuckuck
	Define an array named PeopleTypes that can store a maximum of 50 integer values that will be entered at the keyboard. Enter a series of 1s, 2s, 3s, and 4s into the array, where 1 represents an infant, a 2 represents a child, a 3 represents a teenager, and a 4 represents an asult who was present at a local school function. Any other integer value should not be accepted as valid input and the data entry should stop when a negative value has been entered. Your program should count the number of each 1,2,3, and 4 in the array an output a list of how many infants, children, teenagers, and adults were at the school function.
*/
#include <stdio.h>
#define STRNNUM 50
int main()
{
	int  i = 0, itemCount = 0, input = 1, infant = 0, child = 0, teen = 0, adult = 0, PeopleTypes[STRNNUM];
	printf("\nInput a number, 1 - 4. Where 1 represents an infant, 2 a child, 3 a teen, 4 an adult. (Use a negative number to exit.)\n");
			scanf("%d", &input);
			itemCount++;
			PeopleTypes[i] = input;
			//printf("string value:%d ", PeopleTypes[i]);
			i++;
	for (i = 1; (input > 0) && (input <= 4); i++) //validate our data while gathering it
	{
		printf("\nInput a number, 1 - 4 where 1 represents an infant, 2 a child, 3 a teen, 4 an adult. (Use a negative number to exit.)\n");
		scanf("%d", &input);
		//printf("\ninput = %d\n", input);
		PeopleTypes[i] = input; //input the data into the string
		//printf("string value:%d ", PeopleTypes[i]);
		//printf("\ni = %d\n", i);
		itemCount++; //keep our total count
		//i++;
		
		//printf("\nitemCount %d", itemCount);
		//printf("\ni = %d", i);
	
		if ((input == 0) || (input > 4)) //what to do when user makes invalid input
		{
			printf("\nInvalid input! you entered '%d'\nPlease input 1-4 or program will exit\n", PeopleTypes[i]);
			//PeopleTypes[i] = 0;
			//i--;
			//itemCount--;
			scanf("%d", &input);
			PeopleTypes[i] = input;
			itemCount++;
			i++;
		
			if ((input == 0) || (input > 4))
			{
				//printf("input = %d\n", input);
				PeopleTypes[i] = 0;
				//printf("i = %d\n", i);
				//itemCount--;
				//i--;
			}
			else;
			i--;
			itemCount--;
		}
		
	}
	// end program
		i--;
		itemCount--;
		printf("\n\n***END PROGRAM!***\n");
		//printf("\nitemCount %d\n", itemCount);
		//printf("\ni = %d", i);
		
	printf("You entered the following items:\n");
	for (i = 0; i < itemCount; i++) //display our array
	{
		printf("%d ", PeopleTypes[i]); 
		switch (PeopleTypes[i]) //get our respective counts
		{
			case 1:
			infant++;
			break;
			case 2:
			child++;
			break;
			case 3:
			teen++;
			break;
			case 4:
			adult++;
			break;
		}
		//printf("\nitemCount %d", itemCount);
		//printf("\ni = %d", i);
	}
	// Display our counts
	printf("\n\nAccording to your input there were %d people present.\nThis crowd was made up of %d infant(s), %d children, %d teen(s), and %d adult(s).\n", itemCount, infant, child, teen, adult);

	return 0;
}

