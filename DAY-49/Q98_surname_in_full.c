//Q98: Print the initials of a name with the surname displayed in full.

#include <ctype.h>
#include <stdio.h>

int main() {
	char name[1000];
	int length = 0;
	int surnameStart, i, startOfWord = 1;

	printf("Enter a full name: ");
	if (fgets(name, sizeof(name), stdin) == NULL) {
		printf("Unable to read the name.\n");
		return 1;
	}

	while (name[length] != '\0' && name[length] != '\n') {
		length++;
	}
	name[length] = '\0';

	surnameStart = length;
	while (surnameStart > 0 && isspace((unsigned char)name[surnameStart - 1])) {
		surnameStart--;
	}
	while (surnameStart > 0 && !isspace((unsigned char)name[surnameStart - 1])) {
		surnameStart--;
	}

	printf("Name format: ");
	for (i = 0; i < surnameStart; i++) {
		if (isspace((unsigned char)name[i])) {
			startOfWord = 1;
		} else if (startOfWord) {
			printf("%c. ", name[i]);
			startOfWord = 0;
		}
	}

	if (length == 0) {
		printf("No name was entered.\n");
	} else {
		printf("%s\n", name + surnameStart);
	}

	return 0;
}
