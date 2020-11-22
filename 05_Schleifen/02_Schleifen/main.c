#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Schleifen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	int i = 0;
	while (i < 2) {
		printf("Hello World!\n");
		i++;
	}
	return 0;
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	int userInput = 0;
	printf("Bitte Zahl eingeben:\n");
	scanf("%d", &userInput);
	
	while (userInput > 0) {
		printf("Hello World!\n");
		userInput = userInput - 1;
	}
	return 0;
}


/**
 * Aufgabe 1.3 - Lösung
 */
int main1_3() {
	printf("Bitte Zahl eingeben:\n");
	int userInput = 0;
	int userInputValid = scanf("%d", &userInput);
	
	if (userInputValid) {
		int i = 0;
		while (i <= userInput) {
			printf("\n%d", i);
			i++;
		}
		printf("\n");
	}
	return 0;
}


/**
 * Aufgabe 1.3 - Alternativlösung
 */
int main1_3_alt() {
	printf("Bitte Zahl eingeben:\n");
	int userInput = 0;
	if (scanf("%d", &userInput)) {
		int i = 0;
		while (i <= userInput) {
			if (i % 2 == 0) {
				printf("\n%d", i);
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}



/**
 * Aufgabe 2.1 - Lösung
 */
int main2_1() {
	int i = 0;
	do {
		printf("Hello World!\n");
		i++;
	} while (i < 2);

	return 0;
}


/**
 * Aufgabe 2.2 - Lösung
 */
int main2_2() {
	
	printf("Bitte Zahl eingeben:\n");
	int userInput = 0;
	scanf("%d", &userInput);

	int i = 1;
	do {
		printf("\n%d", i);
		i++;
	} while (i <= userInput);
	printf("\n");

	return 0;
}


/**
 * Aufgabe 3.1 - Lösung
 */
int main3_1() {
	for (int i = 0; i < 2; i++) {
		printf("Hello World!\n");
	}
	return 0;
}

/**
 * Aufgabe 3.2 - Lösung
 */
int main3_2() {
	printf("Bitte Zahl eingeben:\n");
	int userInput = 0;
	if (scanf("%d", &userInput)) {
		for (int i = 0; i <= userInput; i++) {
			if (i % 2 == 0) {
				printf("\n%d", i);
			}
		}
		printf("\n");
	}
	return 0;
}


/**
 * Aufgabe 4.1 - Lösung
 */
int main4_1() {
	int start = 0, end = 0;
	printf("Bitte Start und Ende der Reihe im Format \"0 2\" eingeben:\n");

	if (scanf("%d %d", &start, &end)) {
		if (start >= end) {
			printf("Start muss vor dem Ende liegen.\n");
		}
		else {
			int sum = start;
			printf("\nReihe wird gebildet:\n%d", start);
			for (int i = start + 1; i <= end; i++) {
				sum = sum + i;
				printf(" + %d", i);
			}
			printf(" = %d\n", sum);
		}
	}
	return 0;
}


/**
* Aufgabe 4.1 - Alternativlösung
*/
int main4_1_alt() {
	int start = 0, end = 0;
	printf("Bitte Start und Ende der Reihe im Format \"0 2\" eingeben:\n");

	if (scanf("%u %u", &start, &end)) {
		if (start >= end) {
			printf("Start muss vor dem Ende liegen.\n");
		}
		else {
			int sum = start;
			printf("\nReihe wird gebildet:\n%d", start);

			for (int i = 0; i <= end; i++) {
				if (i < start + 1) {
					continue;
				}
				sum = sum + i;
				printf(" + %d", i);
			}
			printf(" = %d\n", sum);
		}
	}
	return 0;
}
