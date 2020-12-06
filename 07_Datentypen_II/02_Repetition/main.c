#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Repetition
 * Thema: Datentypen II
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 3.1 - Vorlage
 */
int main3_1_tmpl() {
	do {
		printf("Bitte einen Grossbuchstaben eingeben:\n");
		char readChar;
		scanf(" %d", &readChar);

		if (readChar > 'A' && readChar < 'Z') {
			printf("Konvertierter Character: %c zu %c\n\n", readChar, readChar + 32);
		}
		else {
			printf("Ung\x81ltige Eingabe!\n");
			break;
		}
	} while (false);

	return 0;
}

/**
 * Aufgabe 3.1 - Lösung
 */
int main3_1() {
	do {
		printf("Bitte einen Grossbuchstaben eingeben:\n");
		char readChar;
		scanf(" %c", &readChar);

		if (readChar >= 'A' && readChar <= 'Z') {
			printf("Konvertierter Character: %c zu %c\n\n", readChar, readChar + 32);
		}
		else {
			printf("Ung\x81ltige Eingabe!\n");
			break;
		}
	} while (true);

	return 0;
}

/**
 * Aufgabe 3.2 - Vorlage
 */
int main3_2_tmpl() {
	int spaghetti = 0;
	int cannelloni = 0;
	int pizza = 0;

	for (bool doAbort = false; !doAbort; ) {
		printf("\nBitte Men\x81 ausw\x84hlen:\n");
		printf("\t1) Spaghetti\n");
		printf("\t2) Cannelloni\n");
		printf("\t3) Pizza\n");
		printf("\t...andere Eingabe beendet die Men\x81-Auswahl.\n");

		int option = 0;
		scanf(" %d", option);

		switch (option) {
			case 1: {
				printf("Spaghetti sind notiert.\n");
				spaghetti++;
			}
			case 2: {
				printf("Cannelloni sind notiert.\n");
				cannelloni++;
			}
			case 3: {
				printf("Pizza ist notiert.\n");
				pizza++;
			}
			default: {
				break;
			}
		}
	}

	printf("Sie haben gew\x84hlt:\n");
	printf("\t%d x Spaghetti\n", spaghetti);
	printf("\t%d x Cannelloni\n", cannelloni);
	printf("\t%d x Pizza\n", pizza);
	return 0;
}


/**
 * Aufgabe 3.2 - Lösung
 */
int main3_2() {
	int spaghetti = 0;
	int cannelloni = 0;
	int pizza = 0;

	for (bool doAbort = false; !doAbort; ) {
		printf("\nBitte Men\x81 ausw\x84hlen:\n");
		printf("\t1) Spaghetti\n");
		printf("\t2) Cannelloni\n");
		printf("\t3) Pizza\n");
		printf("\t...andere Eingabe beendet die Men\x81-Auswahl.\n");

		int option = 0;
		if (!scanf(" %d", &option)) {
			break;
		}

		switch (option) {
			case 1: {
				printf("Spaghetti sind notiert.\n");
				spaghetti++;
				break;
			}
			case 2: {
				printf("Cannelloni sind notiert.\n");
				cannelloni++;
				break;
			}
			case 3: {
				printf("Pizza ist notiert.\n");
				pizza++;
				break;
			}
			default: {
				doAbort = true;
			}
		}
	}

	printf("Sie haben gew\x84hlt:\n");
	printf("\t%d x Spaghetti\n", spaghetti);
	printf("\t%d x Cannelloni\n", cannelloni);
	printf("\t%d x Pizza\n", pizza);
	return 0;
}
