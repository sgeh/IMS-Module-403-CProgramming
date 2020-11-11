#include <stdio.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Entscheidungen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	printf("Bitte geben Sie eine Ganzzahl ein:\n");
	int userInput;
	int isValid = scanf("%d", &userInput);
	printf("Rueckgabewert: %d / Eingelesener Wert: %d\n", isValid, userInput);
	return 0;
}


/**
* Aufgabe 1.1 - Alternativlösung
*/
int main1_1_alt() {
	printf("Bitte geben Sie zwei Ganzzahlen im Format 'Zahl Zahl' ein:\n");
	int userInputLeft = 0, userInputRight = 0;
	int isValid = scanf("%d %d", &userInputLeft, &userInputRight);
	printf(
		"Rueckgabewert: %d / Eingelesene Werte: %d %d\n",
		isValid, userInputLeft, userInputRight);
	return 0;
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	printf("Bitte geben Sie eine Ganzzahl ein:\n");
	int userInput = 0;
	int isValid = scanf("%d", &userInput);

	if (isValid) {
		printf("Eingabe akzeptiert!\n", userInput);
	}
	printf("Programm wird beendet...\n");
	return 0;
}


/**
* Aufgabe 1.3 - Lösung
*/
int main1_3() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("[ a * (b + c) = d ]\n");
	printf("Bitte geben Sie a als Ganzzahl ein: ");
	if (scanf("%d", &a)) {
		printf("Bitte geben Sie b als Ganzzahl ein: ");

		if (scanf("%d", &b)) {
			printf("Bitte geben Sie c als Ganzzahl ein: ");

			if (scanf("%d", &c)) {
				int d = a * (b + c);
				printf("[ %d * (%d + %d) = %d ]\n", a, b, c, d);
			}
			else {
				printf("Ungueltige Eingabe!\n");
			}
		}
		else {
			printf("Ungueltige Eingabe!\n");
		}
	}
	else {
		printf("Ungueltige Eingabe!\n");
	}
	return 0;
}


/**
* Aufgabe 1.3 - Alternativlösung für Fortgeschrittene
*/
int main1_3_alt() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("[ a * (b + c) = d ]\n");
	
	printf("Bitte geben Sie a als Ganzzahl ein: ");
	if (!scanf("%d", &a)) {
		printf("Ungueltige Eingabe!\n");
		return -1; // exit(EXIT_FAILURE), see <stdlib.h>
	}
	
	printf("Bitte geben Sie b als Ganzzahl ein: ");
	if (!scanf("%d", &b)) {
		printf("Ungueltige Eingabe!\n");
		return -1; // exit(EXIT_FAILURE), see <stdlib.h>
	}

	printf("Bitte geben Sie c als Ganzzahl ein: ");
	if (!scanf("%d", &c)) {
		printf("Ungueltige Eingabe!\n");
		return -1; // exit(EXIT_FAILURE), see <stdlib.h>
	}

	printf("[ %d * (%d + %d) = %d ]\n", a, b, c, a * (b + c));
	return 0; // exit(EXIT_SUCCESS), see <stdlib.h>
}
