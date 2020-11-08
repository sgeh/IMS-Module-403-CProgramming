#include <stdio.h>

/****************************************************************************\
 * Übungsserie 04
 * Thema: Rechnen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 1.1 - Lösung
 */
void main1_1() {
	int a = 5;
	printf("%d", a);
}

/**
 * Aufgabe 1.2 - Lösung
 */
void main1_2() {
	int a = 5;
	int b = 4;
	int c = a * b;
	printf("(%d * %d) = %d\n", a, b, c);
}

/**
 * Aufgabe 2.1 - Lösung
 */
void main2_1() {
	int a = 5;
	int b = 0;
	printf("Bitte geben Sie b ein: ");
	scanf("%d", &b);
	int c = a * b;
	printf("(%d * %d) = %d\n", a, b, c);
}