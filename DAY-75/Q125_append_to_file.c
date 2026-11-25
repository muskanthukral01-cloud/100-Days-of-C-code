//Q125: Append a new line of text to an existing file.

#include <stdio.h>

int main() {
	char filename[256];
	char text[1000];
	FILE *file;
	FILE *checkFile;
	int lastCharacter = '\n';
	int hasExistingContent = 0;
	int i;

	printf("Enter the filename: ");
	if (scanf("%255s", filename) != 1) {
		printf("Please enter a filename.\n");
		return 1;
	}
	while ((i = getchar()) != '\n' && i != EOF) {
	}

	checkFile = fopen(filename, "rb");
	if (checkFile == NULL) {
		printf("Could not open the existing file.\n");
		return 1;
	}

	if (fseek(checkFile, 0, SEEK_END) != 0) {
		printf("Could not check the end of the file.\n");
		fclose(checkFile);
		return 1;
	}

	if (ftell(checkFile) > 0) {
		hasExistingContent = 1;
		if (fseek(checkFile, -1, SEEK_END) != 0
				|| (lastCharacter = fgetc(checkFile)) == EOF) {
			printf("Could not read the end of the file.\n");
			fclose(checkFile);
			return 1;
		}
	}

	if (fclose(checkFile) != 0) {
		printf("Could not close the file properly.\n");
		return 1;
	}

	printf("Enter the line to append: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the text.\n");
		return 1;
	}
	for (i = 0; text[i] != '\0'; i++) {
		if (text[i] == '\n') {
			text[i] = '\0';
			break;
		}
	}

	file = fopen(filename, "a");
	if (file == NULL) {
		printf("Could not open the file in append mode.\n");
		return 1;
	}

	if (hasExistingContent && lastCharacter != '\n' && fputc('\n', file) == EOF) {
		printf("Could not write to the file.\n");
		fclose(file);
		return 1;
	}

	if (fprintf(file, "%s\n", text) < 0) {
		printf("Could not write to the file.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not finish writing to the file.\n");
		return 1;
	}

	printf("Text appended successfully.\n");
	return 0;
}
