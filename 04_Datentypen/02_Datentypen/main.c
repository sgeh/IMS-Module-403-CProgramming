#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Datentypen
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	bool value1 = 1,
		value2 = -10,
		value3 = true,
		value4 = false,
		value5 = 0;

	printf("Ausgabe Boolean value1: %u\n", value1);
	printf("Ausgabe Boolean value2: %u\n", value2);
	printf("Ausgabe Boolean value3: %u\n", value3);
	printf("Ausgabe Boolean value4: %u\n", value4);
	printf("Ausgabe Boolean value5: %u\n", value5);
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	printf("signed int MIN value: %d\n", INT_MIN);
	printf("signed int MAX value: %d\n", INT_MAX);
}


/**
 * Aufgabe 1.3 - Lösung
 */
int main1_3() {
	printf("signed:\n");
	printf("> char MIN value: %hhd\n", SCHAR_MIN);
	printf("> char MAX value: %hhd\n", SCHAR_MAX);
	printf("> short MIN value: %hd\n", SHRT_MIN);
	printf("> short MAX value: %hd\n", SHRT_MAX);
	printf("> int MIN value: %d\n", INT_MIN);
	printf("> int MAX value: %d\n", INT_MAX);
	printf("> long MIN value: %ld\n", LONG_MIN);
	printf("> long MAX value: %ld\n", LONG_MAX);
	printf("> long long MIN value: %lld\n", LLONG_MIN);
	printf("> long long MAX value: %lld\n", LLONG_MAX);

	printf("\n\nunsigned:\n");
	printf("> char MAX value: %hhu\n", UCHAR_MAX);
	printf("> short MAX value: %hu\n", USHRT_MAX);
	printf("> int MAX value: %u\n", UINT_MAX);
	printf("> long MAX value: %lu\n", ULONG_MAX);
	printf("> long long MAX value: %llu\n", ULLONG_MAX);
}


/**
 * Aufgabe 1.4 - Lösung
 */
int main1_4() {
	printf("unsigned (MAX-1):\n");
	printf("> char MAX-1 value: %hhu\n", 254u);
	printf("> short MAX-1 value: %hu\n", 65534u);
	printf("> int MAX-1 value: %u\n", 4294967294u);
	printf("> long MAX-1 value: %lu\n", 4294967294ul);
	printf("> long long MAX-1 value: %llu\n", 18446744073709551614ull);
}


/**
 * Aufgabe 2.1 - Lösung
 */
int main2_1() {
	const unsigned char charValue = 254;
	const unsigned short shortValue = 65534;
	const unsigned int intValue = 4294967294;
	const unsigned long longValue = 4294967294;
	const unsigned long long longLongValue = 18446744073709551614;
	
	printf("unsigned (min):\n");
	printf("> char MAX-1 value: %hhu\n", charValue);
	printf("> short MAX-1 value: %hu\n", shortValue);
	printf("> int MAX-1 value: %u\n", intValue);
	printf("> long MAX-1 value: %lu\n", longValue);
	printf("> long long MAX-1 value: %llu\n", longLongValue);
}
