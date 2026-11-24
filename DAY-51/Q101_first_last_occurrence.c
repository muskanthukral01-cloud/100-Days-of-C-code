//Q101: Find the first and last occurrence of a target in a sorted array.

#include <stdio.h>

int findFirstOccurrence(const int numbers[], int size, int target) {
	int low = 0, high = size - 1;
	int middle, answer = -1;

	while (low <= high) {
		middle = low + (high - low) / 2;

		if (numbers[middle] == target) {
			answer = middle;
			high = middle - 1;
		} else if (numbers[middle] < target) {
			low = middle + 1;
		} else {
			high = middle - 1;
		}
	}

	return answer;
}

int findLastOccurrence(const int numbers[], int size, int target) {
	int low = 0, high = size - 1;
	int middle, answer = -1;

	while (low <= high) {
		middle = low + (high - low) / 2;

		if (numbers[middle] == target) {
			answer = middle;
			low = middle + 1;
		} else if (numbers[middle] < target) {
			low = middle + 1;
		} else {
			high = middle - 1;
		}
	}

	return answer;
}

int main() {
	int numbers[100];
	int size, target, i;
	int first, last;

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

	printf("Enter the target: ");
	if (scanf("%d", &target) != 1) {
		printf("Please enter a valid integer.\n");
		return 1;
	}

	first = findFirstOccurrence(numbers, size, target);
	last = findLastOccurrence(numbers, size, target);

	printf("First occurrence: %d\n", first);
	printf("Last occurrence: %d\n", last);
	return 0;
}
