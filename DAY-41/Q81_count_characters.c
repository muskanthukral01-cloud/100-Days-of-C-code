//Q81: Count characters in a string without using a built-in length function.

#include <stdio.h>

int main() {
	char text[1000];
	int length = 0;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	while (text[length] != '\0' && text[length] != '\n') {
		length++;
	}

	printf("Number of characters: %d\n", length);
	return 0;
}
