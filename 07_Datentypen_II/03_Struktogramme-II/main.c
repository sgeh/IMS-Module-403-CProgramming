#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Datentypen II
 * Thema: Struktogramme II
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
* Aufgabe 1.1 - Lösung
*/
int main1_1() {
	int i = 10;

	while (i != 5) {
		i = i - 1;

		if (i % 2 == 0) {
			continue;
		}
		else {
			for (int j = i; j <= 10; j = j + 2) {
				printf("%d %d\n", i, j);
			}
		}
	}
	return 0;
}