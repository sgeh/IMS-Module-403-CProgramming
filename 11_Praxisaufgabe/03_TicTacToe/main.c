#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <Windows.h>

/****************************************************************************\
 * Übungsserie 03
 * Thema: Praxisaufgabe
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2021 */

/**
 * Aufgabe 1
 */
void main() {
	printf("  // --------------------- \\\\\n");
	printf(" // --| Tic | Tac | Toe |-- \\\\\n");
	printf("// ------------------------- \\\\\n\n\n");

	char field1 = ' ';
	char field2 = ' ';
	char field3 = ' ';
	char field4 = ' ';
	char field5 = ' ';
	char field6 = ' ';
	char field7 = ' ';
	char field8 = ' ';
	char field9 = ' ';

	char currentPlayer = 'O'; // Player1 = O / Player2 = X
	bool gameRunning = true;

	while (gameRunning) {
		printf("Tic-Tac-Toe Spielfeld:\n");
		printf("----------------------\n");
		printf("|1  %c  |2  %c  |3  %c  |\n", field1, field2, field3);
		printf("----------------------\n");
		printf("|4  %c  |5  %c  |6  %c  |\n", field4, field5, field6);
		printf("----------------------\n");
		printf("|7  %c  |8  %c  |9  %c  |\n", field7, field8, field9);
		printf("----------------------\n\n");

		if (currentPlayer == 'O') {
			printf("Player 1 (O) ist am Zug.\n");
		}
		else {
			printf("Player 2 (X) ist am Zug.\n");
		}

		printf("\nBitte geben Sie 1-9 ein. Nur unbelegte Felder d\x81""rfen gesetzt werden.\n");

		int fieldInput = 0;
		bool isOk = scanf(" %d", &fieldInput);

		if (isOk) {
			if (fieldInput == 1 && field1 == ' ') { field1 = currentPlayer; }
			else if (fieldInput == 2 && field2 == ' ') { field2 = currentPlayer; }
			else if (fieldInput == 3 && field3 == ' ') { field3 = currentPlayer; }
			else if (fieldInput == 4 && field4 == ' ') { field4 = currentPlayer; }
			else if (fieldInput == 5 && field5 == ' ') { field5 = currentPlayer; }
			else if (fieldInput == 6 && field6 == ' ') { field6 = currentPlayer; }
			else if (fieldInput == 7 && field7 == ' ') { field7 = currentPlayer; }
			else if (fieldInput == 8 && field8 == ' ') { field8 = currentPlayer; }
			else if (fieldInput == 9 && field9 == ' ') { field9 = currentPlayer; }
			else { isOk = false; }
		}

		if (!isOk) {
			printf("Tja, das war wohl nichts...\n");
			while (getchar() != '\n');
		}

		if (field1 == currentPlayer && field2 == currentPlayer && field3 == currentPlayer
			|| field4 == currentPlayer && field5 == currentPlayer && field6 == currentPlayer
			|| field7 == currentPlayer && field8 == currentPlayer && field9 == currentPlayer
			|| field1 == currentPlayer && field4 == currentPlayer && field7 == currentPlayer
			|| field2 == currentPlayer && field5 == currentPlayer && field8 == currentPlayer
			|| field3 == currentPlayer && field6 == currentPlayer && field9 == currentPlayer
			|| field1 == currentPlayer && field5 == currentPlayer && field9 == currentPlayer
			|| field3 == currentPlayer && field5 == currentPlayer && field7 == currentPlayer) {
			printf("%c hat gewonnen!\n", currentPlayer);
			gameRunning = false;
		} else if (field1 != ' ' && field2 != ' ' && field3 != ' '
			&& field4 != ' ' && field5 != ' ' && field6 != ' '
			&& field7 != ' ' && field8 != ' ' && field9 != ' ') {
			printf("Unentschieden!\n", currentPlayer);
			gameRunning = false;
		}
		else {
			if (currentPlayer == 'O') {
				currentPlayer = 'X';
			}
			else {
				currentPlayer = 'O';
			}

			Sleep(150);
			system("cls");
		}
	}
}
