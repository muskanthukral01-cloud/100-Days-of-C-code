//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
	char first[1000];
	char second[1000];
	int characterCount[256] = {0};
	int i;
	int areAnagrams = 1;

	printf("Enter the first string: ");
	if (fgets(first, sizeof(first), stdin) == NULL) {
		printf("Unable to read the first string.\n");
		return 1;
	}

	printf("Enter the second string: ");
	if (fgets(second, sizeof(second), stdin) == NULL) {
		printf("Unable to read the second string.\n");
		return 1;
	}

	for (i = 0; first[i] != '\0' && first[i] != '\n'; i++) {
		characterCount[(unsigned char)first[i]]++;
	}

	for (i = 0; second[i] != '\0' && second[i] != '\n'; i++) {
		characterCount[(unsigned char)second[i]]--;
	}

	for (i = 0; i < 256; i++) {
		if (characterCount[i] != 0) {
			areAnagrams = 0;
			break;
		}
	}

	if (areAnagrams) {
		printf("The strings are anagrams.\n");
	} else {
		printf("The strings are not anagrams.\n");
	}

	return 0;
}
