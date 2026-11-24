//Q100: Print all non-empty substrings of a string.

#include <stdio.h>

int main() {
	char text[1000];
	int start, end, i;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	printf("Substrings:\n");
	for (start = 0; text[start] != '\0' && text[start] != '\n'; start++) {
		for (end = start; text[end] != '\0' && text[end] != '\n'; end++) {
			for (i = start; i <= end; i++) {
				putchar(text[i]);
			}
			putchar('\n');
		}
	}

	return 0;
}
