#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Code-Analyse und Debugging
 * Thema: Debugging
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */

/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	printf("Alle Grossbuchstaben:\n");

	for (char i = 'A'; i <= 'Z'; i++) {
		printf("%c ", i);
	}
	printf("\n");
	return 0;
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	const int charDelta = 'a' - 'A';
	bool hasCharacter = 0;

	do {
		printf("Bitte einen Kleinbuchstaben eingeben:\n");
		char readChar = 0;
		hasCharacter = false;

		if (scanf(" %c", &readChar) && readChar >= 'a' && readChar <= 'z') {
			printf("Konvertierter Character: %c zu %c\n\n", readChar, readChar - charDelta);
			hasCharacter = true;
		}
		else {
			printf("Ung\x81ltige Eingabe!\n");
		}

	} while (hasCharacter);
	return 0;
}


/**
 * Aufgabe 1.3 - Lösung
 */
int main1_3() {
	printf("Alle Grossbuchstaben:\n");

	for (char row = 1; row <= 26; row++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}

	return 0;
}


/**
 * Aufgabe 1.4 - Lösung
 */
int main1_4() {
	return 0; // please implement for XP+
}

/**
 * Aufgabe 1.5 - Lösung
 */
int main1_5() {
	return 0; // please implement for XP+
}

/**
 * Aufgabe 2.0 - Lösung
 */
int main() {
	int start = 0;
	int end = 0;

	printf("Bitte Start und Ende der Reihe im Format \"0 2\" eingeben:");
	int numOfInput = scanf("%d %d", &start, &end);

	if (numOfInput == 2) {
		if (start >= end) {
			printf("Start muss vor dem Ende liegen.\n");
		}
		else {
			int sum = start;
			printf("\nReihe wird gebildet:\n %d", start);

			for (int i = start + 1; i <= end; i++) {
				sum = sum + i;
				printf(" + %d", i);
			}
			printf(" = %d\n", sum);
		}
	}
	return 0;
}