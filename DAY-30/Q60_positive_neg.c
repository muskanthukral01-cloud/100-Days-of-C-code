//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
	int numbers[100];
	int n, i;
	int positive = 0, negative = 0, zero = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0 || n > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 0;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);

		if (numbers[i] > 0) {
			positive++;
		} else if (numbers[i] < 0) {
			negative++;
		} else {
			zero++;
		}
	}

	printf("Positive = %d\n", positive);
	printf("Negative = %d\n", negative);
	printf("Zero = %d\n", zero);

	return 0;
}

