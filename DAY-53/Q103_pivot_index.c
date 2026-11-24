//Q103: Find the leftmost pivot index of an array.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, i;
	long long totalSum = 0;
	long long leftSum = 0;

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
		totalSum = totalSum + numbers[i];
	}

	for (i = 0; i < size; i++) {
		long long rightSum = totalSum - leftSum - numbers[i];

		if (leftSum == rightSum) {
			printf("Leftmost pivot index: %d\n", i);
			return 0;
		}

		leftSum = leftSum + numbers[i];
	}

	printf("Leftmost pivot index: -1\n");
	return 0;
}
