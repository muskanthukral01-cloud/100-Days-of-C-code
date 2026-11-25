//Q114: Find the length of the longest substring without repeating characters.

#include <stdio.h>

int main() {
	char text[1000];
	int lastSeen[256];
	int length = 0, i;
	int windowStart = 0, longestLength = 0;
	unsigned char character;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	for (i = 0; i < 256; i++) {
		lastSeen[i] = -1;
	}

	while (text[length] != '\0' && text[length] != '\n') {
		length++;
	}

	for (i = 0; i < length; i++) {
		character = (unsigned char)text[i];

		if (lastSeen[character] >= windowStart) {
			windowStart = lastSeen[character] + 1;
		}
		lastSeen[character] = i;

		if (i - windowStart + 1 > longestLength) {
			longestLength = i - windowStart + 1;
		}
	}

	printf("Length of longest substring without repeating characters: %d\n",
			longestLength);
	return 0;
}
