//Q136: Use an enumeration and switch to perform a calculator operation.

#include <stdio.h>

enum Operation {
	ADD = 1,
	SUBTRACT,
	MULTIPLY
};

int main() {
	enum Operation operation;
	int choice;
	double firstNumber, secondNumber;

	printf("Choose operation (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
	if (scanf("%d", &choice) != 1 || choice < ADD || choice > MULTIPLY) {
		printf("Please choose 1, 2, or 3.\n");
		return 1;
	}

	printf("Enter two numbers: ");
	if (scanf("%lf %lf", &firstNumber, &secondNumber) != 2) {
		printf("Please enter two valid numbers.\n");
		return 1;
	}

	operation = (enum Operation)choice;

	switch (operation) {
		case ADD:
			printf("Result: %.2f\n", firstNumber + secondNumber);
			break;
		case SUBTRACT:
			printf("Result: %.2f\n", firstNumber - secondNumber);
			break;
		case MULTIPLY:
			printf("Result: %.2f\n", firstNumber * secondNumber);
			break;
	}

	return 0;
}
