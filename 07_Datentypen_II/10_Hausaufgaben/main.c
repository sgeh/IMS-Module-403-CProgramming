#include <stdio.h>
#include <stdbool.h>

/****************************************************************************\
* Hausaufgaben
* Thema: Datentypen II
* Author: Silvan Gehrig
* Version: 1.0
********************************************************************* 2020 */

 /**
 * Aufgabe 2.1.1 - Lösung
 */
int main2_1_1() {

	double leftOperand = 0;
	printf("Bitte geben Sie einen ersten Operanden ein:\n");
	scanf(" %Lf", &leftOperand);

	char op = 0;
	printf("\nBitte geben Sie einen Operator ein:\n\
\t- Minus\n\
\t+ Plus\n\
\t/ Division\n\
\t* Multiplikation\n");
	scanf(" %c", &op);


	double rightOperand = 0;
	double result = 0;
	printf("\nBitte geben Sie einen zweiten Operanden ein:\n");
	scanf(" %Lf", &rightOperand);

	switch (op) {
		case '-': {
			result = leftOperand - rightOperand;
			break;
		}
		case '+': {
			result = leftOperand + rightOperand;
			break;
		}
		case '/': {
			if (rightOperand == 0) {
				result = 0;
			}
			else {
				result = leftOperand / rightOperand;
			}
			break;
		}
		case '*': {
			result = leftOperand * rightOperand;
			break;
		}
	}

	printf("\nResultat:\n\
%f\n\
%c%f\n\
=%f\n\n\n", leftOperand, op, rightOperand, result);
}


/**
* Aufgabe 2.1.2 - Lösung
*/
int main2_1_2() {

	bool hasInvalidInput = false;

	double leftOperand = 0;
	printf("Bitte geben Sie einen ersten Operanden ein:\n");
	hasInvalidInput = !scanf(" %Lf", &leftOperand);

	char op = 0;
	if (!hasInvalidInput) {
		printf("\nBitte geben Sie einen Operator ein:\n\
\t- Minus\n\
\t+ Plus\n\
\t/ Division\n\
\t* Multiplikation\n");

		hasInvalidInput = !scanf(" %c", &op);

		if (op != '-' && op != '+' && op != '/' && op != '*') {
			hasInvalidInput = true;
		}
	}

	double rightOperand = 0;
	double result = 0;

	if (!hasInvalidInput) {
		printf("\nBitte geben Sie einen zweiten Operanden ein:\n");
		hasInvalidInput = !scanf(" %Lf", &rightOperand);

		switch (op) {
			case '-': {
				result = leftOperand - rightOperand;
				break;
			}
			case '+': {
				result = leftOperand + rightOperand;
				break;
			}
			case '/': {
				if (rightOperand == 0) {
					hasInvalidInput = true;
				}
				else {
					result = leftOperand / rightOperand;
				}
				break;
			}
			case '*': {
				result = leftOperand * rightOperand;
				break;
			}
			default: {
				hasInvalidInput = true;
			}
		}
	}

	if (!hasInvalidInput) {
		printf("\nResultat:\n\
%f\n\
%c%f\n\
=%f\n\n\n", leftOperand, op, rightOperand, result);
	}
	else {
		printf("Error: Falscheingabe!\n");
	}
}



/**
 * Aufgabe 2.1.2 - Alternativlösung
 */
int main2_1_2_alt() {

	double leftOperand = 0;
	printf("Bitte geben Sie einen ersten Operanden ein:\n");

	if (scanf(" %lf", &leftOperand)) {
		char op = 0;
		printf("\nBitte geben Sie einen Operator ein:\n\
\t- Minus\n\
\t+ Plus\n\
\t/ Division\n\
\t* Multiplikation\n");

		if (scanf(" %c", &op) && (op == '-' || op == '+' || op == '/' || op == '*')) {
			double rightOperand = 0;
			printf("\nBitte geben Sie einen zweiten Operanden ein:\n");

			if (scanf(" %lf", &rightOperand) && !(op == '/' && rightOperand == 0)) {
				double result = 0;

				switch (op) {
					case '-': {
						result = leftOperand - rightOperand;
						break;
					}
					case '+': {
						result = leftOperand + rightOperand;
						break;
					}
					case '/': {
						result = leftOperand / rightOperand;
						break;
					}
					case '*': {
						result = leftOperand * rightOperand;
						break;
					}
				}
				printf("\nResultat:\n\
%f\n\
%c%f\n\
=%f\n\n\n", leftOperand, op, rightOperand, result);
			}
			else {
				printf("Error: Falscheingabe!\n");
			}
		}
		else {
			printf("Error: Falscheingabe!\n");
		}
	}
	else {
		printf("Error: Falscheingabe!\n");
	}
}

