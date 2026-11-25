//Q134: Display a message for a status using an enumeration.

#include <stdio.h>

enum Status {
	SUCCESS,
	FAILURE,
	TIMEOUT
};

int main() {
	enum Status status;
	int choice;

	printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
	if (scanf("%d", &choice) != 1 || choice < SUCCESS || choice > TIMEOUT) {
		printf("Please enter 0, 1, or 2.\n");
		return 1;
	}

	status = (enum Status)choice;

	switch (status) {
		case SUCCESS:
			printf("Operation completed successfully.\n");
			break;
		case FAILURE:
			printf("Operation failed.\n");
			break;
		case TIMEOUT:
			printf("Operation timed out.\n");
			break;
	}

	return 0;
}
