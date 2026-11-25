//Q124: Copy the contents of one file into another file.

#include <stdio.h>
#include <string.h>

int main() {
	char sourceName[256];
	char destinationName[256];
	FILE *source;
	FILE *destination;
	int character;

	printf("Enter the source filename: ");
	if (scanf("%255s", sourceName) != 1) {
		printf("Please enter a source filename.\n");
		return 1;
	}

	printf("Enter the destination filename: ");
	if (scanf("%255s", destinationName) != 1) {
		printf("Please enter a destination filename.\n");
		return 1;
	}

	if (strcmp(sourceName, destinationName) == 0) {
		printf("Source and destination filenames must be different.\n");
		return 1;
	}

	source = fopen(sourceName, "rb");
	if (source == NULL) {
		printf("Could not open the source file.\n");
		return 1;
	}

	destination = fopen(destinationName, "wb");
	if (destination == NULL) {
		printf("Could not create the destination file.\n");
		fclose(source);
		return 1;
	}

	while ((character = fgetc(source)) != EOF) {
		if (fputc(character, destination) == EOF) {
			printf("An error occurred while copying the file.\n");
			fclose(source);
			fclose(destination);
			return 1;
		}
	}

	if (ferror(source)) {
		printf("An error occurred while reading the source file.\n");
		fclose(source);
		fclose(destination);
		return 1;
	}

	if (fclose(source) != 0) {
		printf("Could not close the source file properly.\n");
		fclose(destination);
		return 1;
	}

	if (fclose(destination) != 0) {
		printf("Could not close the files properly.\n");
		return 1;
	}

	printf("File copied successfully.\n");
	return 0;
}
