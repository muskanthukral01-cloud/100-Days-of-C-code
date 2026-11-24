//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
	int n, number, divisor, is_prime;

	printf("Enter the limit: ");
	scanf("%d", &n);

	if (n < 2) {
		printf("There are no prime numbers in this range.\n");
		return 0;
	}

	printf("Prime numbers are: ");

	for (number = 2; number <= n; number++) {
		is_prime = 1;

		for (divisor = 2; divisor < number; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}

		if (is_prime == 1) {
			printf("%d ", number);
		}
	}

	printf("\n");
	return 0;
}

