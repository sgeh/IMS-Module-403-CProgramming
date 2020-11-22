#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Übungsserie 01
 * Thema: Mehrfachentscheidungen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */

/**
* Aufgabe 2 - Lösung
*/
int main() {
	int inputValue = 0;
	printf("Bitte Wert zwischen 1-3 eingeben:\n");
	scanf("%d", &inputValue);

	switch (inputValue) {
		case 1: {
			printf("Eins");
			break;
		}
		case 2: {
			printf("Zwei");
			break;
		}
		case 3: {
			printf("Drei");
			break;
		}
		default: {
			printf("Etwas falsches");
		}
	}
	printf(" wurde eingegeben.\n");
}
