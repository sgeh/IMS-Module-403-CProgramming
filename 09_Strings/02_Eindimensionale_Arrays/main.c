#include <stdio.h>
#include <stdlib.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Arrays
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */

/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	const int numbersLength = 3;
	float numbers[] = { 1.4142, 2.7182, 3.1415 };
	for (int i = 0; i < numbersLength; ++i) {
		printf("%7.5f\n", numbers[i]);
	}
	return 0;
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	const int numbersLength = 3;
	float numbers[] = { 1.4142, 2.7182, 3.1415 };
	double sum = 0;

	for (int i = 0; i < numbersLength; ++i) {
		sum = sum + numbers[i];
		printf("%7.5f\n", numbers[i]);
	}
	printf("Summe: %7.5f\n", sum);
	return 0;
}


/**
 * Aufgabe 1.3 - Lösung
 */
int main1_3() {
	const int numbersLength = 3;
	float numbers[] = { 1.4142, 2.7182, 3.1415 };
	double sqrNumbers[] = { 0, 0, 0 };
	double sum = 0;
	double sqrSum = 0;

	for (int i = 0; i < numbersLength; ++i) {
		sum = sum + numbers[i];
		printf("%7.5f\n", numbers[i]);
	}

	printf("Summe: %7.5f\n", sum);
	printf("\nNummern^2:\n");
	
	for (int i = 0; i < numbersLength; ++i) {
		sqrNumbers[i] = numbers[i] * numbers[i];
		sqrSum = sqrSum + sqrNumbers[i];
		sum = sum + sqrNumbers[i];
		printf("%7.5f\n", sqrNumbers[i]);
	}

	printf("Summe: %7.5f\n", sqrSum);
	printf("\n\nSumme total: %7.5f\n             ========\n", sum);
	
	return 0;
}


/**
 * Aufgabe 1.4 - Lösung
 */
int main1_4() {
	int numCount = 0;
	const int maxNumbersLength = 10;
	double input[10] = { 0 };

	printf("Bitte Anzahl der zu summierenden Zahlen eingeben:\n");

	if (scanf("%d", &numCount)) {
		double sum = 0;

		for (int i = 0; i < numCount && i < maxNumbersLength; ++i) {
			printf("Bitte geben Sie die %d von %d ein:\n", i + 1, numCount);
			scanf(" %Lf", &input[i]);
			sum = sum + input[i];
		}
		printf("Summe: %7.5f\n", sum);
	}
	return 0;
}


/**
 * Aufgabe 1.4 - Alternativlösung
 */
int main1_4_alt() {
	const int maxNumbersLength = 10;
	double input[10] = { 0 };
	double sum = 0;

	printf("Bitte geben Sie eine Zahl ein:\n");

	for (int i = 0; i < maxNumbersLength && scanf(" %Lf", &input[i]); i++) {
		sum = sum + input[i];
		printf("Bitte geben Sie eine Zahl ein:\n");
	}
	
	printf("Summe: %7.5f\n", sum);
	return 0;
}


/**
 * Aufgabe 1.5 - Lösung
 */
int main1_5() {
	const validCharactersLength = 3;
	char validCharacters[] = { 'a', 'b', 'c' };
	printf("Characters a-c: ");
	for (int i = 0; i < validCharactersLength; i++) {
		printf("%c", validCharacters[i]);
	}
	// …
	return 0;
}

