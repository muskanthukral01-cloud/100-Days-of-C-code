//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
	char text[1000];
	int i;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	printf("Characters in the string:\n");
	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		printf("%c\n", text[i]);
	}

	return 0;
}
