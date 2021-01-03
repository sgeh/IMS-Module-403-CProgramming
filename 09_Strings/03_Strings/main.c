#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Strings
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2021 */


/**
 * Aufgabe 1.1 a)
 */
int main1_1a() {
	char halloWelt[] = "Hallo Welt!";
	printf(halloWelt);
}


/**
 * Aufgabe 1.1 b)
 */
int main1_1b() {
	char halloWelt[] = { 'H', 'a', 'l', 'l', 'o', ' ', 'W', 'e', 'l', 't', '!' /*, '\0'*/ };
	printf("%s", halloWelt);
}


/**
 * Aufgabe 1.1 c)
 */
int main1_1c() {
	char halloWelt[] = "Hallo Welt";
	for (int i = 0; i < 11; i++) {
		printf("%c\n", halloWelt[i]);
	}
}


/**
 * Aufgabe 1.2
 */
int main1_2() {
	
	char halloWelt[] = "Hallo Welt!";
	printf("%13s", halloWelt);
}


/**
 * Aufgabe 2.1 - Lösung
 */
int main2_1() {
	int spaghetti = 0;
	int cannelloni = 0;
	int pizza = 0;
	char firstname[21] = { 0 };
	char lastname[21] = { 0 };

	printf("\nBitte geben Sie Ihren Vor- und Nachnamen ein:\n");
	scanf("%20s %20s", &firstname, &lastname);

	for (bool doAbort = false; !doAbort; ) {
		printf("\nBitte Men\x81 ausw\x84hlen:\n");
		printf("\t1) Spaghetti\n");
		printf("\t2) Cannelloni\n");
		printf("\t3) Pizza\n");
		printf("\t...andere Eingabe beendet die Men\x81-Auswahl.\n");

		char option[2] = { 0 };
		if (!scanf(" %[1-3]", &option)) {
			break;
		}

		switch (option[0]) {
			case '1': {
				printf("Spaghetti sind notiert.\n");
				spaghetti++;
				break;
			}
			case '2': {
				printf("Cannelloni sind notiert.\n");
				cannelloni++;
				break;
			}
			case '3': {
				printf("Pizza ist notiert.\n");
				pizza++;
				break;
			}
			default: {
				doAbort = true;
			}
		}
	}

	printf("Die folgende Bestellung wurde aufgenommen f\x81r %s %s:\n", firstname, lastname);
	printf("\t%d x Spaghetti\n", spaghetti);
	printf("\t%d x Cannelloni\n", cannelloni);
	printf("\t%d x Pizza\n", pizza);
	return 0;
}
