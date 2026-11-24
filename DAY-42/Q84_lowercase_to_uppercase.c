//Q84: Convert lowercase letters to uppercase without using a built-in function.

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
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - 'a' + 'A';
		}
	}

	text[i] = '\0';
	printf("String in uppercase: %s\n", text);
	return 0;
}
