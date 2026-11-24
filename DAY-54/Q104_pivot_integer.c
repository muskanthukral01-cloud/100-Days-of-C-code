//Q104: Find x where the sum from 1 to x equals the sum from x to n.

#include <stdio.h>

int main() {
	long long n;
	long long totalSum;
	long long low, high, middle, pivot = -1;

	printf("Enter a positive integer n (up to 2147483647): ");
	if (scanf("%lld", &n) != 1 || n <= 0 || n > 2147483647LL) {
		printf("Please enter a positive integer in the allowed range.\n");
		return 1;
	}

	totalSum = n * (n + 1) / 2;
	low = 1;
	high = n;

	while (low <= high) {
		middle = low + (high - low) / 2;

		if (middle * middle == totalSum) {
			pivot = middle;
			break;
		} else if (middle * middle < totalSum) {
			low = middle + 1;
		} else {
			high = middle - 1;
		}
	}

	printf("Pivot integer: %lld\n", pivot);
	return 0;
}
