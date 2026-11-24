//Q97: Print the initials of a name.

#include <ctype.h>
#include <stdio.h>

int main() {
	char name[1000];
	int i, foundInitial = 0, startOfWord = 1;

	printf("Enter a full name: ");
	if (fgets(name, sizeof(name), stdin) == NULL) {
		printf("Unable to read the name.\n");
		return 1;
	}

	printf("Initials: ");
	for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
		if (isspace((unsigned char)name[i])) {
			startOfWord = 1;
		} else if (startOfWord) {
			if (foundInitial) {
				printf(".");
			}
			printf("%c", name[i]);
			foundInitial = 1;
			startOfWord = 0;
		}
	}

	if (foundInitial) {
		printf(".\n");
	} else {
		printf("No name was entered.\n");
	}

	return 0;
}
