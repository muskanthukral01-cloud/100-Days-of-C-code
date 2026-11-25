//Q126: Check whether a file exists and display its contents.

#include <stdio.h>

int main() {
	char filename[256];
	char line[1000];
	FILE *file;

	printf("Enter the filename: ");
	if (scanf("%255s", filename) != 1) {
		printf("Please enter a filename.\n");
		return 1;
	}

	file = fopen(filename, "r");
	if (file == NULL) {
		printf("The file does not exist or cannot be opened.\n");
		return 1;
	}

	while (fgets(line, sizeof(line), file) != NULL) {
		printf("%s", line);
	}

	if (ferror(file)) {
		printf("An error occurred while reading the file.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not close the file properly.\n");
		return 1;
	}

	return 0;
}
