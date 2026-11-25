//Q129: Find the sum and average of integers in numbers.txt.

#include <stdio.h>

int main() {
	FILE *file = fopen("numbers.txt", "r");
	int number;
	int scanResult;
	long long sum = 0;
	int count = 0;

	if (file == NULL) {
		printf("Could not open numbers.txt.\n");
		return 1;
	}

	while ((scanResult = fscanf(file, "%d", &number)) == 1) {
		sum = sum + number;
		count++;
	}

	if (scanResult != EOF) {
		printf("numbers.txt contains invalid data.\n");
		fclose(file);
		return 1;
	}

	if (ferror(file)) {
		printf("An error occurred while reading numbers.txt.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not close numbers.txt properly.\n");
		return 1;
	}

	if (count == 0) {
		printf("numbers.txt does not contain any integers.\n");
		return 1;
	}

	printf("Sum: %lld\n", sum);
	printf("Average: %.2f\n", (double)sum / count);
	return 0;
}
