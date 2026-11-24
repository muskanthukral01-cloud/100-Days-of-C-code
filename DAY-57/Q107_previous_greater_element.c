//Q107: Find the previous greater element on the left for each array element.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, i, j;
	int previousGreater;

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

	printf("Previous greater elements: ");
	for (i = 0; i < size; i++) {
		previousGreater = -1;

		for (j = i - 1; j >= 0; j--) {
			if (numbers[j] > numbers[i]) {
				previousGreater = numbers[j];
				break;
			}
		}

		if (i > 0) {
			printf(", ");
		}
		printf("%d", previousGreater);
	}
	printf("\n");

	return 0;
}
