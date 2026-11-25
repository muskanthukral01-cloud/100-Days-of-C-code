//Q130: Save student records to a file, then read and display them.

#include <stdio.h>

int main() {
	FILE *file;
	char name[50];
	int rollNumber;
	float marks;
	int recordCount, i, scanResult;

	printf("Enter the number of students (1 to 100): ");
	if (scanf("%d", &recordCount) != 1
			|| recordCount <= 0 || recordCount > 100) {
		printf("Please enter a number from 1 to 100.\n");
		return 1;
	}

	file = fopen("students.txt", "w");
	if (file == NULL) {
		printf("Could not create students.txt.\n");
		return 1;
	}

	for (i = 0; i < recordCount; i++) {
		printf("Enter student %d name, roll number, and marks: ", i + 1);
		if (scanf("%49s %d %f", name, &rollNumber, &marks) != 3) {
			printf("Please enter a name, integer roll number, and marks.\n");
			fclose(file);
			return 1;
		}

		if (fprintf(file, "%s %d %.2f\n", name, rollNumber, marks) < 0) {
			printf("Could not write a student record.\n");
			fclose(file);
			return 1;
		}
	}

	if (fclose(file) != 0) {
		printf("Could not finish saving students.txt.\n");
		return 1;
	}

	file = fopen("students.txt", "r");
	if (file == NULL) {
		printf("Could not reopen students.txt.\n");
		return 1;
	}

	printf("\nStudent records:\n");
	printf("Name\tRoll number\tMarks\n");
	for (i = 0; i < recordCount; i++) {
		scanResult = fscanf(file, "%49s %d %f", name, &rollNumber, &marks);
		if (scanResult != 3) {
			printf("Could not read all student records from students.txt.\n");
			fclose(file);
			return 1;
		}
		printf("%s\t%d\t\t%.2f\n", name, rollNumber, marks);
	}

	if (ferror(file)) {
		printf("An error occurred while reading students.txt.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not close students.txt properly.\n");
		return 1;
	}

	return 0;
}
