#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/****************************************************************************\
 * Übungsserie 02
 * Thema: Mehrdimensionale Arrays
 * Author: Silvan Gehrig
 * Version: 1.0
 ********************************************************************* 2021 */


/**
 * Aufgabe 1.1 - Lösung
 */
int main1_1() {
	char encrypedChars[10] = { 0 };
	char ciphers[][26] = {
		{ 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B' },
		{ 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd' } 
	};

	char input = 0;
	bool hasError = false;

	for (int i = 0; i < 10 && !hasError; ++i) {
		printf("Please enter an upper or lower character to encrypt (%d of %d) or any other to abort:\n", i + 1, 10);
		hasError = !scanf(" %c", &input);

		if (!hasError) {
			int cipher = -1;
			int cipherOffset = -1;
			
			if (input >= 'a' && input <= 'z')  {
				cipherOffset = 'a';
				cipher = 0;
			}
			else if (input >= 'A' && input <= 'Z') {
				cipherOffset = 'A';
				cipher = 1;
			}
			else {
				hasError = true;
			}
			
			if (!hasError) {
				encrypedChars[i] = ciphers[cipher][input - cipherOffset];
			}
		}
	}

	printf("\n\nEncrypted data:\n");

	for (int i = 0; i < 10 && encrypedChars[i] != 0; ++i) {
		printf("%c", encrypedChars[i]);
	}
	printf("\n\nEncrypted data:\n%s\n");

	return 0;
}
