#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <Windows.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Praxisaufgabe
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2021 */


/**
 * Aufgabe 1.1
 */
int main1_1() {
	printf(" Repeater Game \n\n");
}


/**
 * Aufgabe 1.2
 */
int main1_2() {
	printf(" Repeater Game \n\n");

	bool gameRunning = true;

	while (gameRunning) {
		printf("Do Next Repetition? (y = yes)\n");

		char doNext = 0;
		scanf(" %c", &doNext);

		if (doNext != 'y') {
			gameRunning = false;
			printf("Game finished...\n");
		}
	}
}


/**
 * Aufgabe 1.3
 */
int main1_3() {
	printf(" Repeater Game \n\n");

	bool gameRunning = true;

	while (gameRunning) {
		printf("Do Next Repetition? (y = yes)\n");

		char doNext = 0;
		scanf(" %c", &doNext);

		if (doNext != 'y') {
			gameRunning = false;
			printf("Game finished...\n");
		}
		else {
			printf("Next Round! Please wait...\n");
			Sleep(1500);
			system("cls");
		}
	}
}
