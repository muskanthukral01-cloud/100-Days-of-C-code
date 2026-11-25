//Q127: Convert lowercase letters in input.txt to uppercase in output.txt.

#include <stdio.h>

int main() {
	FILE *inputFile = fopen("input.txt", "r");
	FILE *outputFile;
	int character;

	if (inputFile == NULL) {
		printf("Could not open input.txt.\n");
		return 1;
	}

	outputFile = fopen("output.txt", "w");
	if (outputFile == NULL) {
		printf("Could not create output.txt.\n");
		fclose(inputFile);
		return 1;
	}

	while ((character = fgetc(inputFile)) != EOF) {
		if (character >= 'a' && character <= 'z') {
			character = character - 'a' + 'A';
		}

		if (fputc(character, outputFile) == EOF) {
			printf("Could not write to output.txt.\n");
			fclose(inputFile);
			fclose(outputFile);
			return 1;
		}
	}

	if (ferror(inputFile)) {
		printf("An error occurred while reading input.txt.\n");
		fclose(inputFile);
		fclose(outputFile);
		return 1;
	}

	if (fclose(inputFile) != 0) {
		printf("Could not close input.txt properly.\n");
		fclose(outputFile);
		return 1;
	}

	if (fclose(outputFile) != 0) {
		printf("Could not close output.txt properly.\n");
		return 1;
	}

	printf("Uppercase text was saved to output.txt.\n");
	return 0;
}
