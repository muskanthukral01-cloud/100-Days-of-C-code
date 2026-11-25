//Q113: Find the kth smallest element in an array.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, k, i, j;
	int smallestIndex, temp;

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

	printf("Enter k (1 to %d): ", size);
	if (scanf("%d", &k) != 1 || k < 1 || k > size) {
		printf("Please enter a k from 1 to the array size.\n");
		return 1;
	}

	for (i = 0; i < k; i++) {
		smallestIndex = i;
		for (j = i + 1; j < size; j++) {
			if (numbers[j] < numbers[smallestIndex]) {
				smallestIndex = j;
			}
		}

		temp = numbers[i];
		numbers[i] = numbers[smallestIndex];
		numbers[smallestIndex] = temp;
	}

	printf("The %dth smallest element is: %d\n", k, numbers[k - 1]);
	return 0;
}
