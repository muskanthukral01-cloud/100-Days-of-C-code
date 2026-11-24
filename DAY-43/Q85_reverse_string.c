//Q85: Reverse a string.

#include <stdio.h>

int main() {
	char text[1000];
	char temp;
	int length = 0;
	int start, end;

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
		temp = text[start];
		text[start] = text[end];
		text[end] = temp;
		start++;
		end--;
	}

	text[length] = '\0';
	printf("Reversed string: %s\n", text);
	return 0;
}
