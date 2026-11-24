//Q94: Find the longest word in a sentence.

#include <ctype.h>
#include <stdio.h>

int main() {
	char sentence[1000];
	char longestWord[1000];
	int i = 0, start, wordLength, longestLength = 0;

	printf("Enter a sentence: ");
	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		printf("Unable to read the sentence.\n");
		return 1;
	}

	while (sentence[i] != '\0' && sentence[i] != '\n') {
		if (isspace((unsigned char)sentence[i])) {
			i++;
			continue;
		}

		start = i;
		while (sentence[i] != '\0' && sentence[i] != '\n'
				&& !isspace((unsigned char)sentence[i])) {
			i++;
		}

		wordLength = i - start;
		if (wordLength > longestLength) {
			longestLength = wordLength;
			for (int j = 0; j < wordLength; j++) {
				longestWord[j] = sentence[start + j];
			}
			longestWord[longestLength] = '\0';
		}
	}

	if (longestLength == 0) {
		printf("The sentence has no words.\n");
	} else {
		printf("Longest word: %s\n", longestWord);
		printf("Length: %d\n", longestLength);
	}

	return 0;
}
