#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/****************************************************************************\
* Hausaufgaben
* Thema: Operatoren und Repetition
* Author: Silvan Gehrig
* Version: 1.0
********************************************************************* 2021 */


/**
* Aufgabe 2.1 - Lösung
*/
int main() {
	printf("--- Hallo, ich berechne f\x81r Sie den ggT!\n\nBitte geben Sie a und b im Format \"a b\" ein:\n ");

	int a = 0;
	int b = 0;

	if (scanf("%d %d", &a, &b) == 2) {
		while (a != b) {
			if (a > b) {
				a -= b;
			}
			else {
				b -= a;
			}
		}
		printf("ggT ist: %d\n", a);
		return 0;
	}
	else {
		printf(" >> Ung\x81ltige Eingabe!");
		return -1;
	}
}
