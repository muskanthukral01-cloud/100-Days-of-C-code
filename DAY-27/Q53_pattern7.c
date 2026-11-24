/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
	int row, star_count, star;

	for (row = 1; row <= 9; row++) {
		if (row <= 5) {
			star_count = 2 * row - 1;
		} else {
			star_count = 2 * (10 - row) - 1;
		}

		for (star = 1; star <= star_count; star++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}