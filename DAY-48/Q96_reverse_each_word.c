//Q96: Reverse each word in a sentence without changing the word order.

#include <ctype.h>
#include <stdio.h>

int main() {
	char sentence[1000];
	char temp;
	int length = 0;
	int i, start = -1, end;

	printf("Enter a sentence: ");
	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		printf("Unable to read the sentence.\n");
		return 1;
	}

	while (sentence[length] != '\0' && sentence[length] != '\n') {
		length++;
	}
	sentence[length] = '\0';

	for (i = 0; i <= length; i++) {
		if (i == length || isspace((unsigned char)sentence[i])) {
			if (start != -1) {
				end = i - 1;
				while (start < end) {
					temp = sentence[start];
					sentence[start] = sentence[end];
					sentence[end] = temp;
					start++;
					end--;
				}
				start = -1;
			}
		} else if (start == -1) {
			start = i;
		}
	}

	printf("Sentence with each word reversed: %s\n", sentence);
	return 0;
}
