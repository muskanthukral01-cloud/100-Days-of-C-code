//Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
	char text[1000];
	int length = 0;
	int start, end;
	int isPalindrome = 1;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		printf("Unable to read the string.\n");
		return 1;
	}

	while (text[length] != '\0' && text[length] != '\n') {
		length++;
	}

	start = 0;
	end = length - 1;

	while (start < end) {
		if (text[start] != text[end]) {
			isPalindrome = 0;
			break;
		}

		start++;
		end--;
	}

	if (isPalindrome) {
		printf("The string is a palindrome.\n");
	} else {
		printf("The string is not a palindrome.\n");
	}

	return 0;
}
