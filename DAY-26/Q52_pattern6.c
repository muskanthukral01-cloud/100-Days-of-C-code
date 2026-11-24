/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
	int group, star, stars_in_group;

	for (group = 1; group <= 5; group++) {
		if (group <= 3) {
			stars_in_group = 2 * group - 1;
		} else {
			stars_in_group = 2 * (6 - group) - 1;
		}

		for (star = 1; star <= stars_in_group; star++) {
			printf("*\n");
		}

		printf("\n");
	}

	return 0;
}