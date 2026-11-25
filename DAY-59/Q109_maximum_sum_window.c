//Q109: Find the maximum sum of all subarrays of size k.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, windowSize, i;
	long long currentSum = 0;
	long long maximumSum;

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

	for (i = 0; i < windowSize; i++) {
		currentSum = currentSum + numbers[i];
	}
	maximumSum = currentSum;

	for (i = windowSize; i < size; i++) {
		currentSum = currentSum + numbers[i] - numbers[i - windowSize];
		if (currentSum > maximumSum) {
			maximumSum = currentSum;
		}
	}

	printf("Maximum sum of a subarray of size %d: %lld\n",
			windowSize, maximumSum);
	return 0;
}
