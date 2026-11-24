//Q83: Count the vowels and consonants in a string.

#include <ctype.h>
#include <stdio.h>

int main() {
	char text[1000];
	char letter;
	int i, vowels = 0, consonants = 0;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
		if (isalpha((unsigned char)text[i])) {
			letter = (char)tolower((unsigned char)text[i]);

			if (letter == 'a' || letter == 'e' || letter == 'i'
					|| letter == 'o' || letter == 'u') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	return 0;
}
