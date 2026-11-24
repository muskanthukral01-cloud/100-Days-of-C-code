//Q89: Count the frequency of a given character in a string.

#include <stdio.h>

int main() {
	char text[1000];
	char characterInput[10];
	char character;
	int i, frequency = 0;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	printf("Enter the character to count: ");
	if (fgets(characterInput, sizeof(characterInput), stdin) == NULL
			|| characterInput[0] == '\0' || characterInput[0] == '\n') {
		printf("Unable to read the character.\n");
		return 1;
	}
	character = characterInput[0];

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (text[i] == character) {
			frequency++;
		}
	}

	printf("The character '%c' appears %d time(s).\n", character, frequency);
	return 0;
}
