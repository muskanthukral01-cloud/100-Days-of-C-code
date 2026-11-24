//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
	int numbers[100];
	int n, i;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0 || n > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 0;
	}

	for (i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	printf("Array elements are: ");
	for (i = 0; i < n; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;
}

