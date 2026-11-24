//Q57: Find the sum of elements in an array.

#include <stdio.h>

int main() {
	int numbers[100];
	int n, i, sum = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0 || n > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 0;
	}

	for (i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &numbers[i]);
		sum = sum + numbers[i];
	}

	printf("Sum of the elements = %d\n", sum);
	return 0;
}

