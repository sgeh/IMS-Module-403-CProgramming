#include <stdio.h>
#include <stdbool.h>

 /****************************************************************************\
 * Übungsserie 02
 * Thema: Formatierte Ausgaben
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2020 */


/**
 * Aufgabe 2.2 - Lösung
 */
int main2_2() {
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
		hasInvalidInput = !scanf("\nBitte w\x84hlen Sie einen Operator, oder starten Sie eine neue Berechnung:\n\
\t- Minus\n\
\t+ Plus\n\
\t/ Division\n\
\t* Multiplikation\n\
\tn Neue Berechnung starten\n", &rightOperand);

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
%22.10f\n\
%c%21.10f\n\
=%21.10f\n\n\n", leftOperand, op, rightOperand, result);
	}
	else {
		printf("Error: Falscheingabe!\n");
	}
}



/**
 * Aufgabe 2.3 - Lösung
 */
int main2_3() {
	bool hasInvalidInput = false;

	while (!hasInvalidInput) {

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
%22.10f\n\
%c%21.10f\n\
=%21.10f\n\n\n", leftOperand, op, rightOperand, result);
		}
		else {
			printf("Error: Falscheingabe!\n");
		}
	}
}
