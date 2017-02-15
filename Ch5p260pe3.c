/* 
ITS240-01 
Lab 01 
Ch5p260pe3 
02/06/2017 
Daniel Kuckuck
	Write a program using a nested loop to get 5 players of a bowling team's scores from 3 games average their scores.
	1st		286	252	265
	2nd		212	186	215
	3rd		252	232	216
	4th		192	201	235
	5th		186	236	272
*/
#include <stdio.h>

main()
{
//	printf("\nThis program receieves user input of the player's score for each game then calculates what the average is."); 
	int players, games;
	float totalScore = 0.0, score = 0.0, averageScore =0.0, teamAverage = 0.0, playerAverage = 0.0, playerScore = 0.0;

	printf("\nPlease enter the number of players --> ");
	scanf("%d", &players);
	printf("\nPlease enter the number of games the players played --> ");
	scanf("%d", &games);
	for (int i = 1; i <= players; ++i)
	{
	 	score = 0.0; /*clear score for this player*/
	 	playerAverage = 0.0;
	 	playerScore = 0.0;
		for (int j = 1; j <= games; ++j)
		{
			printf("Enter player %d's score for game %d --> ",i, j);
			scanf("%f", &score);
			playerScore = playerScore + score;
			totalScore = totalScore + score;
			//printf("\n%.2f", score);
			//printf("\n%.2f", totalScore);
		}
		playerAverage = playerScore / games;
		averageScore = averageScore + playerAverage;
	 			printf("\nPlayer %d's average is %.2f.\n", i, playerAverage);
		
		//printf("\n%.2f", totalScore);
	}
	teamAverage = averageScore / players;
		printf("\nThe team's average score was %.2f.\n", teamAverage);
	
	return 0;
}

