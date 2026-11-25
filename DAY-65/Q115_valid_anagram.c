//Q115: Check if two lowercase strings are anagrams.

#include <stdio.h>

void removeNewline(char text[]) {
	int i = 0;

	while (text[i] != '\0') {
		if (text[i] == '\n') {
			text[i] = '\0';
			return;
		}
		i++;
	}
}

int main() {
	char first[1000];
	char second[1000];
	int characterCount[26] = {0};
	int i, isAnagram = 1;

	printf("Enter the first lowercase string: ");
	if (fgets(first, sizeof(first), stdin) == NULL) {
		printf("Unable to read the first string.\n");
		return 1;
	}

	printf("Enter the second lowercase string: ");
	if (fgets(second, sizeof(second), stdin) == NULL) {
		printf("Unable to read the second string.\n");
		return 1;
	}

	removeNewline(first);
	removeNewline(second);

	for (i = 0; first[i] != '\0'; i++) {
		if (first[i] < 'a' || first[i] > 'z') {
			isAnagram = 0;
			break;
		}
		characterCount[first[i] - 'a']++;
	}

	for (i = 0; second[i] != '\0'; i++) {
		if (second[i] < 'a' || second[i] > 'z') {
			isAnagram = 0;
			break;
		}
		characterCount[second[i] - 'a']--;
	}

	for (i = 0; i < 26; i++) {
		if (characterCount[i] != 0) {
			isAnagram = 0;
		}
	}

	if (isAnagram) {
		printf("Anagram\n");
	} else {
		printf("Not Anagram\n");
	}

	return 0;
}
