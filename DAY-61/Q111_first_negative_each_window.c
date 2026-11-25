//Q111: Find the first negative number in each subarray of size k.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, windowSize, start, i;
	int firstNegative;

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
	}

	printf("Enter the window size k: ");
	if (scanf("%d", &windowSize) != 1 || windowSize <= 0 || windowSize > size) {
		printf("Please enter a k from 1 to the array size.\n");
		return 1;
	}

	printf("First negative in each window: ");
	for (start = 0; start <= size - windowSize; start++) {
		firstNegative = 0;
		for (i = start; i < start + windowSize; i++) {
			if (numbers[i] < 0) {
				firstNegative = numbers[i];
				break;
			}
		}

		if (start > 0) {
			printf(" ");
		}
		printf("%d", firstNegative);
	}
	printf("\n");

	return 0;
}
