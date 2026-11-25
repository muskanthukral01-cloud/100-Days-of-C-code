//Q112: Find the maximum sum of any contiguous subarray.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, i;
	long long currentSum, maximumSum;

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

	currentSum = numbers[0];
	maximumSum = numbers[0];

	for (i = 1; i < size; i++) {
		if (currentSum + numbers[i] < numbers[i]) {
			currentSum = numbers[i];
		} else {
			currentSum = currentSum + numbers[i];
		}

		if (currentSum > maximumSum) {
			maximumSum = currentSum;
		}
	}

	printf("Maximum subarray sum: %lld\n", maximumSum);
	return 0;
}
