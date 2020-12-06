#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <float.h>

/****************************************************************************\
 * Datentypen II
 * Thema: Datentypen II
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	printf("> float MIN value: %f\n", FLT_MIN);
	printf("> float MAX value: %f\n", FLT_MAX);
	printf("> float Precision value: %u\n", FLT_DIG);

	printf("> double MIN value: %f\n", DBL_MIN);
	printf("> double MAX value: %f\n", DBL_MAX);
	printf("> double Precision value: %u\n", DBL_DIG);

	printf("> long double MIN value: %Lf\n", LDBL_MIN);
	printf("> long double MAX value: %Lf\n", LDBL_MAX);
	printf("> long double Precision value: %u\n", LDBL_DIG);
	return 0;
}


/**
 * Aufgabe 1.2 - Lösung
 */
int main1_2() {
	printf("> float MIN -0.1 value: %f\n", FLT_MIN - .1f);
	printf("> float MAX +0.1 value: %f\n", FLT_MAX + .1f);

	printf("> double MIN -0.1 value: %f\n", DBL_MIN - .1);
	printf("> double MAX +0.1 value: %f\n", DBL_MAX + .1);

	printf("> long double MIN -0.1 value: %Lf\n", LDBL_MIN - .1l);
	printf("> long double MAX +0.1 value: %Lf\n", LDBL_MAX + .1l);
}


/**
 * Aufgabe 1.3 - Vorlage
 */
int main1_3_tmpl() {
	double a = 0.2;
	double b = 0.1;
	double c1 = a + b;
	double c2 = 0.3;
	
	bool isEqual = (c1 == c2); // TODO: hier Ihre bessere Implementation
	printf("a + b = c1\n");
	printf("%f + %f = %f\n\n", a, b, c1);
	printf("c2 = %f => is c1 equal to c2? [%u]\n", c2, isEqual);
}


/**
 * Aufgabe 1.3 - Lösung
 */
int main1_3() {
	double a = 0.2;
	double b = 0.1;
	double c1 = a + b;
	double c2 = 0.3;
	double delta = fabs(c1 - c2);

	bool isEqual = delta < DBL_EPSILON;
	printf("a + b = c1\n");
	printf("%f + %f = %f\n\n", a, b, c1);
	printf("c2 = %f => is c1 equal to c2? [%u]\n", c2, isEqual);
}


/**
 * Aufgabe 1.4 - Lösung
 */
int main1_4() {
	printf("> float ZERO value: %f\n", -0.0f);
	printf("> double ZERO value: %f\n", -0.0);
	printf("> long double ZERO value: %Lf\n", -0.0l);
	return 0;
}


/**
 * Aufgabe 1.5 - Lösung
 */
int main1_5() {
	printf("Original: %f / Exponentialschreibweise: %f \n", 1000.f,     1e3f);
	printf("Original: %f / Exponentialschreibweise: %f \n", .0500f,     5e-2f);
	printf("Original: %f / Exponentialschreibweise: %f \n", 345.05f,    3.4505e2f);
	printf("Original: %f / Exponentialschreibweise: %f \n", 15200000.4, 1.52000004e7);
	printf("Original: %f / Exponentialschreibweise: %f \n", 0.349000f,  3.49000e-1f);
	printf("Original: %f / Exponentialschreibweise: %f \n", 1.949f,     1.949e0f);
	printf("Original: %f / Exponentialschreibweise: %f \n", 545.34f,    5.4534e2f);
	printf("Original: %f / Exponentialschreibweise: %f \n", 98287.f,    9.8287e4f);
}