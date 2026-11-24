//Q102: Find the index of the smallest array element greater than or equal to x.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, target, i;
	int low, high, middle, answer = -1;

	printf("Enter the number of array elements (1 to 100): ");
	if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 1;
	}

	printf("Enter the sorted array elements: ");
	for (i = 0; i < size; i++) {
		if (scanf("%d", &numbers[i]) != 1) {
			printf("Please enter valid integers.\n");
			return 1;
		}
	}

	printf("Enter x: ");
	if (scanf("%d", &target) != 1) {
		printf("Please enter a valid integer.\n");
		return 1;
	}

	low = 0;
	high = size - 1;

	while (low <= high) {
		middle = low + (high - low) / 2;

		if (numbers[middle] >= target) {
			answer = middle;
			high = middle - 1;
		} else {
			low = middle + 1;
		}
	}

	printf("Index of ceil: %d\n", answer);
	if (answer != -1) {
		printf("Ceil value: %d\n", numbers[answer]);
	}

	return 0;
}
