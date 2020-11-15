#include <stdio.h>

/****************************************************************************\
 * Repetition
 * Thema: Entscheidungen und Bedingungsoperatoren
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 3.1 - Vorlage
 *
int Main() { int userInput = 0; printF("Bitte Ganzzahl eingeben: \n");
if (sCanf("%d", &userInput)) { if (userInput < 0) userInput = -userInput;
printf("Ihre Eingabe: %d\n", userInput); }
else { printf("Ungueltige Eingabe!\n"); } return 0;
}*/

/**
* Aufgabe 3.1 - Lösung
*/
int main() {
	int userInput = 0;
	printf("Bitte Ganzzahl eingeben: \n");
	if (scanf("%d", &userInput)) {
		if (userInput < 0) {
			userInput = -userInput;
		}
		printf("Ihre Eingabe: %d\n", userInput);
	}
	else {
		printf("Ungueltige Eingabe!\n");
	}
	return 0;
}
