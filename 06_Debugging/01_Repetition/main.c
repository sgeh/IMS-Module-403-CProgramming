#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Code-Analyse und Debugging
 * Thema: Debugging
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
* Aufgabe 1.1 c - Vorlage
*/
int main1_1c_tmpl() {
	int i = 0;
	while (i > -5) {
		printf("Hello World!\n");
		i++;
	}
	return 0;
}

/**
* Aufgabe 1.1 c - Lösung
*/
int main1_1c() {
	int i = 0;
	while (i < 5) {
		printf("Hello World!\n");
		i++;
	}
	return 0;
}

/**
* Aufgabe 1.1 d - Vorlage
*/
int main1_1d_tmpl() {
	int i = 10;
	while (true) {
		if (i == -5) {
			continue;
		}
		else {
			i = i - 1;
			printf("Hello World!\n");
		}
	}
	return 0;
}


/**
* Aufgabe 1.1 d - Lösung
*/
int main1_1d() {
	int i = 10;
	while (true) {
		if (i == -5) {
			break;
		}
		else {
			i = i - 1;
			printf("Hello World!\n");
		}
	}
	return 0;
}
