//Q87: Count spaces, digits, and special characters in a string.

#include <ctype.h>
#include <stdio.h>

int main() {
	char text[1000];
	int i, spaces = 0, digits = 0, specialCharacters = 0;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (text[i] == ' ') {
			spaces++;
		} else if (isdigit((unsigned char)text[i])) {
			digits++;
		} else if (!isalpha((unsigned char)text[i])) {
			specialCharacters++;
		}
	}

	printf("Spaces: %d\n", spaces);
	printf("Digits: %d\n", digits);
	printf("Special characters: %d\n", specialCharacters);
	return 0;
}
