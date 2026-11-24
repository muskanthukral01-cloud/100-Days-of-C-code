//Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
	char text[1000];
	int readIndex, writeIndex = 0;
	char character;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (readIndex = 0; text[readIndex] != '\0' && text[readIndex] != '\n';
			readIndex++) {
		character = text[readIndex];

		if (character != 'a' && character != 'e' && character != 'i'
				&& character != 'o' && character != 'u'
				&& character != 'A' && character != 'E' && character != 'I'
				&& character != 'O' && character != 'U') {
			text[writeIndex] = character;
			writeIndex++;
		}
	}

	text[writeIndex] = '\0';
	printf("String without vowels: %s\n", text);
	return 0;
}
