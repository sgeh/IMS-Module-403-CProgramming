#include <stdio.h>

/****************************************************************************\
 * Hausaufgaben
 * Thema: Entscheidungen und Bedingungsoperatoren
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


 /**
 * Aufgabe 3.1 - Vorlage
 */
int secretNumber = 123456;

int main3_1_tmpl() {
	printf("Bitte geben Sie Ihr Passwort ein:");

	// TODO: hier Passwort einlesen...
}

/**
 * Aufgabe 3.1 - Lösung
 */
int main3_1() {
	printf("Bitte geben Sie Ihr Passwort ein:\n");
	int userInput = 0;

	if (!scanf("%d", &userInput)) {
		printf("Ungueltige Eingabe!\n");
	}
	else if (secretNumber == userInput) {
		printf("Passwort ist richtig!\n");
	}
	else {
		printf("Passwort ist falsch!\n");
	}
}

/**
* Aufgabe 3.2 - Lösung
*/
int main3_2() {
	printf("Bitte geben Sie eine Zahl zwischen 1 und 6 ein:\n");
	int userInput = 0;

	if (!scanf("%d", &userInput)) {
		printf("Ungueltige Eingabe!\n");
	}
	else if ((userInput >= 1 && userInput <= 6) || (userInput <= -1 && userInput >= -6)) {
		printf("Die Wuerfel sind gefallen: %d!\n", userInput);
	}
	else {
		printf("Bitte einen Wert zwischen 1 und 6 eingeben.\n");
	}
}

/**
* Aufgabe 3.2 - Alternativlösung
*/
int main3_2_alt() {
	printf("Bitte geben Sie eine Zahl zwischen 1 und 6 ein:\n");
	int userInput = 0;

	if (!scanf("%d", &userInput)) {
		printf("Ungueltige Eingabe!\n");
	}
	else if (userInput >= 1 && userInput <= 6) {
		printf("Die Wuerfel sind gefallen: %d!\n", userInput);
	}
	else if (userInput <= -1 && userInput >= -6) {
		printf("Die Wuerfel sind gefallen: %d!\n", -userInput);
	}
	else {
		printf("Bitte einen Wert zwischen 1 und 6 eingeben.\n");
	}
}

/**
* Aufgabe 3.3 - Experience Points
*/
int main() {
	printf("Bitte geben Sie zwei Zahlen zwischen 1 und 6 im Format 'Zahl Zahl' ein:\n");
	int dice1 = 0;
	int dice2 = 0;
	int numberReadDice = scanf("%d %d", &dice1, &dice2);

	if (dice1 < 0) { dice1 = -dice1; }
	if (dice2 < 0) { dice2 = -dice2; }

	if (numberReadDice != 2) {
		printf("Ungueltige Eingabe!\n");
	}
	else if (dice1 != dice2
		&& (dice1 >= 1 && dice1 <= 6)
		&& (dice2 >= 1 && dice2 <= 6)) {
		printf("Die Wuerfel sind gefallen: %d %d!\n", dice1, dice2);
	}
	else {
		printf("Bitte einen unterschiedlichen Wert zwischen 1 und 6 eingeben.\n");
	}
}