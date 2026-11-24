//Q92: Find the first repeating lowercase letter in a string.

#include <stdio.h>

int main() {
	char text[1000];
	int seen[26] = {0};
	int i, index;
	char repeatingLetter = '\0';

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			index = text[i] - 'a';

			if (seen[index] == 1) {
				repeatingLetter = text[i];
				break;
			}

			seen[index] = 1;
		}
	}

	if (repeatingLetter != '\0') {
		printf("First repeating lowercase letter: %c\n", repeatingLetter);
	} else {
		printf("There is no repeating lowercase letter.\n");
	}

	return 0;
}
