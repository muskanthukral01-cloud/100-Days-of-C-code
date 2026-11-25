//Q108: Find the product of all array elements except the current element.

#include <stdio.h>

int main() {
	int numbers[100];
	long long answer[100];
	int size, i;
	long long prefixProduct = 1;
	long long suffixProduct = 1;

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

	for (i = 0; i < size; i++) {
		answer[i] = prefixProduct;
		prefixProduct = prefixProduct * numbers[i];
	}

	for (i = size - 1; i >= 0; i--) {
		answer[i] = answer[i] * suffixProduct;
		suffixProduct = suffixProduct * numbers[i];
	}

	printf("Product except self: ");
	for (i = 0; i < size; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%lld", answer[i]);
	}
	printf("\n");

	return 0;
}
