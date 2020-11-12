#include <stdio.h>

/****************************************************************************\
 * Hausaufgaben
 * Thema: Basics der Programmierung in C
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */

/**
 * Aufgabe 3.1 - Lösung
 */
int main3_1() {
	int a = 5;
	printf("%d", a);
	return 0;
}

/**
 * Aufgabe 3.2 - Lösung
 */
int main3_2() {
	int a = 0;
	printf("%d", a);
	return 0;
}

/**
 * Aufgabe 4.1 - Lösung
 */
int main4_1() {
	printf("\t  /--------------------\\\n\
\t /--    HALLO WELT    --\\\n\
\t/------------------------\\\n");
	return 0;
}

/**
 * Aufgabe 4.2 - Lösung
 */
int main4_2() {
	int a = 0;
	int b = 0;
	printf("[ a * b = c ]\n");
	printf("Bitte geben Sie a ein: ");
	scanf("%d", &a);
	printf("Bitte geben Sie b ein: ");
	scanf("%d", &b);
	printf("[ %d * %d = %d ]\n", a, b, a * b);
	return 0;
}

/**
 * Aufgabe 4.3 - Lösung
 */
int main4_3() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("[ a * (b + c) = d ]\n");
	printf("Bitte geben Sie a ein: ");
	scanf("%d", &a);
	printf("Bitte geben Sie b ein: ");
	scanf("%d", &b);
	printf("Bitte geben Sie c ein: ");
	scanf("%d", &c);
	printf("[ %d * (%d + %d) = %d ]\n", a, b, c, a * (b + c));
	return 0;
}
