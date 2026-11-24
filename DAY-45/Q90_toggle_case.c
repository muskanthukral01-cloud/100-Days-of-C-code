//Q90: Toggle the case of each character in a string.

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
		} else if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = text[i] - 'A' + 'a';
		}
	}

	text[i] = '\0';
	printf("String with case toggled: %s\n", text);
	return 0;
}
