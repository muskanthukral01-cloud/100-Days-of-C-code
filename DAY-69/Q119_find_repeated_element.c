//Q119: Find the repeated element in one pass through the input array.

#include <stdio.h>

#define TABLE_SIZE 211

int main() {
	int hashValues[TABLE_SIZE];
	int occupied[TABLE_SIZE] = {0};
	int size, i, number, index;
	int repeatedNumber = 0;
	int foundRepeatedNumber = 0;

	printf("Enter the number of array elements (2 to 100): ");
	if (scanf("%d", &size) != 1 || size < 2 || size > 100) {
		printf("Please enter a number from 2 to 100.\n");
		return 1;
	}

	printf("Enter the array elements: ");
	for (i = 0; i < size; i++) {
		if (scanf("%d", &number) != 1) {
			printf("Please enter valid integers.\n");
			return 1;
		}

		index = number % TABLE_SIZE;
		if (index < 0) {
			index = index + TABLE_SIZE;
		}

		while (occupied[index] && hashValues[index] != number) {
			index = (index + 1) % TABLE_SIZE;
		}

		if (occupied[index]) {
			repeatedNumber = number;
			foundRepeatedNumber = 1;
			break;
		}

		hashValues[index] = number;
		occupied[index] = 1;
	}

	if (foundRepeatedNumber) {
		printf("Repeated element: %d\n", repeatedNumber);
	} else {
		printf("No repeated element was found.\n");
	}

	return 0;
}
