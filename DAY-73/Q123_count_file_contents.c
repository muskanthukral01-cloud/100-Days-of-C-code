//Q123: Count characters, words, and lines in a text file.

#include <ctype.h>
#include <stdio.h>

int main() {
	char filename[256];
	FILE *file;
	int character;
	int previousCharacter = '\n';
	int inWord = 0;
	long long characters = 0, words = 0, lines = 0;
	int hasContent = 0;

	printf("Enter the filename: ");
	if (scanf("%255s", filename) != 1) {
		printf("Please enter a filename.\n");
		return 1;
	}

	file = fopen(filename, "r");
	if (file == NULL) {
		printf("Could not open the file.\n");
		return 1;
	}

	while ((character = fgetc(file)) != EOF) {
		characters++;
		hasContent = 1;

		if (character == '\n') {
			lines++;
		}

		if (isspace((unsigned char)character)) {
			inWord = 0;
		} else if (!inWord) {
			words++;
			inWord = 1;
		}

		previousCharacter = character;
	}

	if (ferror(file)) {
		printf("An error occurred while reading the file.\n");
		fclose(file);
		return 1;
	}

	if (hasContent && previousCharacter != '\n') {
		lines++;
	}

	if (fclose(file) != 0) {
		printf("Could not close the file properly.\n");
		return 1;
	}

	printf("Characters: %lld\n", characters);
	printf("Words: %lld\n", words);
	printf("Lines: %lld\n", lines);
	return 0;
}
