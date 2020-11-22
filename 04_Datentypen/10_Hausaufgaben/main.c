#include <stdio.h>

/****************************************************************************\
 * Hausaufgaben
 * Thema: Datentypen I und Mehrfachentscheidungen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 3.1 - Lösung
 */
int main() {
	char chosenMenu = ' ';
	printf("Bitte w\x84hlen Sie die gew\x81nschte Funktion aus:\n\
\ta)  Neue Transaktion erfassen.\n\
\tb)  Existierende Transaktion mutieren.\n\
\tc)  Alle Transaktionen auflisten.\n\
\td)  Beenden\n");
	
	scanf("%c", &chosenMenu);

	if (chosenMenu == 'a') {
		printf("Bitte geben Sie einen Betrag [CHF] ein:\n");
		int amount = 0;
		scanf("%d", &amount);
		printf("Der Betrag %d CHF wurde \x81" "bermittelt.\n", amount);
	}
	else if (chosenMenu == 'b' || chosenMenu == 'c') {
		printf("Keine existierenden Transaktionen vorhanden.\n");
	}
	else {
		printf("Programm beendet.\n");
	}
	return 0;
}
