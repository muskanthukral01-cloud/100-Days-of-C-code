//Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main() {
	char first[1000];
	char second[1000];
	int firstLength = 0, secondLength = 0;
	int shift, i;
	int isRotation = 0;

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

	while (first[firstLength] != '\0' && first[firstLength] != '\n') {
		firstLength++;
	}
	while (second[secondLength] != '\0' && second[secondLength] != '\n') {
		secondLength++;
	}

	if (firstLength == secondLength) {
		if (firstLength == 0) {
			isRotation = 1;
		}

		for (shift = 0; shift < firstLength && !isRotation; shift++) {
			for (i = 0; i < firstLength; i++) {
				if (first[i] != second[(i + shift) % firstLength]) {
					break;
				}
			}

			if (i == firstLength) {
				isRotation = 1;
			}
		}
	}

	if (isRotation) {
		printf("The second string is a rotation of the first.\n");
	} else {
		printf("The second string is not a rotation of the first.\n");
	}

	return 0;
}
