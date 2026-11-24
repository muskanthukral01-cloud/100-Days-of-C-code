//Q106: Find the next greater element on the right for each array element.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, i, j;
	int nextGreater;

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

	printf("Next greater elements: ");
	for (i = 0; i < size; i++) {
		nextGreater = -1;

		for (j = i + 1; j < size; j++) {
			if (numbers[j] > numbers[i]) {
				nextGreater = numbers[j];
				break;
			}
		}

		if (i > 0) {
			printf(", ");
		}
		printf("%d", nextGreater);
	}
	printf("\n");

	return 0;
}
