//Q122: Read and display the contents of info.txt.

#include <stdio.h>

int main() {
	char line[1000];
	FILE *file = fopen("info.txt", "r");

	if (file == NULL) {
		printf("Could not open info.txt. Make sure the file exists.\n");
		return 1;
	}

	while (fgets(line, sizeof(line), file) != NULL) {
		printf("%s", line);
	}

	if (ferror(file)) {
		printf("An error occurred while reading info.txt.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not close info.txt properly.\n");
		return 1;
	}

	return 0;
}
