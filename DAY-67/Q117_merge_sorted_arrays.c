//Q117: Merge two sorted arrays into one sorted array.

#include <stdio.h>

int main() {
	int first[100], second[100], merged[200];
	int firstSize, secondSize;
	int firstIndex = 0, secondIndex = 0, mergedIndex = 0;
	int i;

	printf("Enter the size of the first array (1 to 100): ");
	if (scanf("%d", &firstSize) != 1 || firstSize <= 0 || firstSize > 100) {
		printf("Please enter a size from 1 to 100.\n");
		return 1;
	}

	printf("Enter the first sorted array: ");
	for (i = 0; i < firstSize; i++) {
		if (scanf("%d", &first[i]) != 1) {
			printf("Please enter valid integers.\n");
			return 1;
		}
	}

	printf("Enter the size of the second array (1 to 100): ");
	if (scanf("%d", &secondSize) != 1 || secondSize <= 0 || secondSize > 100) {
		printf("Please enter a size from 1 to 100.\n");
		return 1;
	}

	printf("Enter the second sorted array: ");
	for (i = 0; i < secondSize; i++) {
		if (scanf("%d", &second[i]) != 1) {
			printf("Please enter valid integers.\n");
			return 1;
		}
	}

	while (firstIndex < firstSize && secondIndex < secondSize) {
		if (first[firstIndex] <= second[secondIndex]) {
			merged[mergedIndex] = first[firstIndex];
			firstIndex++;
		} else {
			merged[mergedIndex] = second[secondIndex];
			secondIndex++;
		}
		mergedIndex++;
	}

	while (firstIndex < firstSize) {
		merged[mergedIndex] = first[firstIndex];
		firstIndex++;
		mergedIndex++;
	}

	while (secondIndex < secondSize) {
		merged[mergedIndex] = second[secondIndex];
		secondIndex++;
		mergedIndex++;
	}

	printf("Merged sorted array: ");
	for (i = 0; i < mergedIndex; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", merged[i]);
	}
	printf("\n");

	return 0;
}
