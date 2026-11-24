//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
	char text[1000];
	int i;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (text[i] == ' ') {
			text[i] = '-';
		}
	}

	text[i] = '\0';
	printf("String after replacing spaces: %s\n", text);
	return 0;
}
