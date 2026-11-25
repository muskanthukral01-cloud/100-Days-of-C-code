//Q120: Change a string to sentence case.

#include <ctype.h>
#include <stdio.h>

int main() {
	char text[1000];
	int i;
	int capitalizeNextLetter = 1;

	printf("Enter a sentence: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the sentence.\n");
		return 1;
	}

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (isalpha((unsigned char)text[i])) {
			if (capitalizeNextLetter) {
				text[i] = (char)toupper((unsigned char)text[i]);
				capitalizeNextLetter = 0;
			} else {
				text[i] = (char)tolower((unsigned char)text[i]);
			}
		} else if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
			capitalizeNextLetter = 1;
		}
	}
	text[i] = '\0';

	printf("Sentence case: %s\n", text);
	return 0;
}
