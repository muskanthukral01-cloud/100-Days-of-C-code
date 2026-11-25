//Q116: Find two distinct array indices whose values add up to the target.

#include <stdio.h>

int main() {
	int numbers[100];
	int size, target, i, j;
	int firstIndex = -1, secondIndex = -1;

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

	printf("Enter the target: ");
	if (scanf("%d", &target) != 1) {
		printf("Please enter a valid integer.\n");
		return 1;
	}

	for (i = 0; i < size && firstIndex == -1; i++) {
		for (j = i + 1; j < size; j++) {
			if ((long long)numbers[i] + numbers[j] == target) {
				firstIndex = i;
				secondIndex = j;
				break;
			}
		}
	}

	printf("%d %d\n", firstIndex, secondIndex);
	return 0;
}
