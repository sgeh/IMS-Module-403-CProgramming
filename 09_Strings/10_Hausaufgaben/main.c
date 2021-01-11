#include <stdio.h>
#include <string.h>

/****************************************************************************\
 * Hausaufgaben
 * Thema: Strings & Arrays
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2021 */

/**
 * Aufgabe 2.1 - Lösung ohne R004
 */
void main2_1() {
	int maxEntries = 10;
	int userEntries = 0;
	printf("Wie viele Eingaben m\x84""chten Sie machen? Maximal %d erlaubt.\n", maxEntries);
	scanf("%d", &userEntries);

	int upperCaseDelta = 'a' - 'A'; // 32

	char chars[10] = { 0 }; // [0], [1], [2], ...

	for (int cntr = 0; cntr < userEntries; cntr++) {
		char userInput = 0;
		printf("Bitte geben Sie einen Kleinbuchstaben (%d von %d) ein: ", cntr + 1, maxEntries);
		scanf(" %c", &userInput);

		if (userInput >= 'a' && userInput <= 'z') {
			char encryptedInput = userInput - upperCaseDelta;
			chars[cntr] = encryptedInput;
		}
		else {
			break;
		}
	}

	printf("\n\nEncrypted data: ");
	for (int cntr = 0; cntr < userEntries; cntr++) {
		printf("%c", chars[cntr]);
	}
}
