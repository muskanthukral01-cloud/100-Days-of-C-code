//Q128: Count vowels and consonants in input.txt.

#include <ctype.h>
#include <stdio.h>

int main() {
	FILE *file = fopen("input.txt", "r");
	int character;
	int vowels = 0, consonants = 0;
	int lowercaseCharacter;

	if (file == NULL) {
		printf("Could not open input.txt.\n");
		return 1;
	}

	while ((character = fgetc(file)) != EOF) {
		if (isalpha((unsigned char)character)) {
			lowercaseCharacter = tolower((unsigned char)character);

			if (lowercaseCharacter == 'a' || lowercaseCharacter == 'e'
					|| lowercaseCharacter == 'i' || lowercaseCharacter == 'o'
					|| lowercaseCharacter == 'u') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	if (ferror(file)) {
		printf("An error occurred while reading input.txt.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not close input.txt properly.\n");
		return 1;
	}

	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	return 0;
}
