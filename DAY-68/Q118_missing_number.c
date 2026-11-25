//Q118: Find the missing number from the integers 0 through n.

#include <stdio.h>

int main() {
	int size, i, number;
	int missingNumber;

	printf("Enter n (the array contains n numbers from 0 to n): ");
	if (scanf("%d", &size) != 1 || size < 0 || size > 100) {
		printf("Please enter a number from 0 to 100.\n");
		return 1;
	}

	missingNumber = size;
	printf("Enter the %d array numbers: ", size);
	for (i = 0; i < size; i++) {
		if (scanf("%d", &number) != 1 || number < 0 || number > size) {
			printf("Please enter valid numbers from 0 to n.\n");
			return 1;
		}
		missingNumber = missingNumber ^ i ^ number;
	}

	printf("Missing number: %d\n", missingNumber);
	return 0;
}
