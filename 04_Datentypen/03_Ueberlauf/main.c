#include <stdio.h>
#include <limits.h>

/****************************************************************************\
 * Übungsserie 03
 * Thema: Ueberlauf
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
* Aufgabe 1.1 - Lösung
*/
void main1_1() {
	printf("> int MIN value: %d\n", INT_MIN);
	printf("> int MAX value: %d\n", INT_MAX);

	printf("> int MIN-1 value: %d\n", INT_MIN-1);
	printf("> int MAX+1 value: %d\n", INT_MAX+1);
}