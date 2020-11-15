#include <stdio.h>

/****************************************************************************\
 * Übungsserie 04
 * Thema: ASCII-Table
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */

/**
 * Aufgabe 1.1 - Vorlage
 */
int main1_1_tmpl() {
	printf("Bitte geben Sie eine gueltige Zahl zwischen 1 und 6 ein:\n");
	int userInput;

	if (!scanf("%d", &userInput)) {
		printf("Aendern Sie bitte Ihre Eingabe, Sie haben Woerter eingegeben.\n");
	}
	else if ((userInput >= 1 && userInput <= 6) || (userInput <= -1 && userInput >= -6)) {
		printf("Caesar spricht: Die Wuerfel sind gefallen: %d!\n", userInput);
	}
	else {
		printf("Bitte einen Wert zwischen 1 und 6 eingeben.\n");
	}
}

/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	char ue = '\0x81'; // ü
	printf("Bitte geben Sie eine g%cltige Zahl zwischen 1 und 6 ein:\n", ue);
	int userInput;

	if (!scanf("%d", &userInput)) {
		printf("\x8Endern Sie bitte Ihre Eingabe, Sie haben W\x94rter eingegeben.\n");
	}
	else if ((userInput >= 1 && userInput <= 6) || (userInput <= -1 && userInput >= -6)) {
		printf("Caesar spricht: Die W\x81rfel sind gefallen: %d!\n", userInput);
	}
	else {
		printf("Bitte einen Wert zwischen 1 und 6 eingeben.\n");
	}
}
