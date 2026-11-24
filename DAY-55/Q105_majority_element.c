//Q105: Find the element that appears more than half the time in an array.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, i;
	int candidate = 0, count = 0, occurrences = 0;

	printf("Enter the number of array elements (1 to 100): ");
	if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 1;
	}

	printf("Enter the array elements: ");
	for (i = 0; i < size; i++) {
		if (scanf("%d", &numbers[i]) != 1) {
			printf("Please enter valid integers.\n");
			return 1;
		}

		if (count == 0) {
			candidate = numbers[i];
			count = 1;
		} else if (numbers[i] == candidate) {
			count++;
		} else {
			count--;
		}
	}

	for (i = 0; i < size; i++) {
		if (numbers[i] == candidate) {
			occurrences++;
		}
	}

	if (occurrences > size / 2) {
		printf("Majority element: %d\n", candidate);
	} else {
		printf("Majority element: -1\n");
	}

	return 0;
}
