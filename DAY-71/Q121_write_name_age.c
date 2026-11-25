//Q121: Write a user's name and age to info.txt.

#include <stdio.h>

int main() {
	char name[1000];
	int age;
	FILE *file;
	int i;

	printf("Enter your name: ");
	if (fgets(name, sizeof(name), stdin) == NULL) {
		printf("Unable to read the name.\n");
		return 1;
	}

	for (i = 0; name[i] != '\0'; i++) {
		if (name[i] == '\n') {
			name[i] = '\0';
			break;
		}
	}

	printf("Enter your age: ");
	if (scanf("%d", &age) != 1 || age < 0) {
		printf("Please enter a valid non-negative age.\n");
		return 1;
	}

	file = fopen("info.txt", "w");
	if (file == NULL) {
		printf("Could not create info.txt.\n");
		return 1;
	}

	if (fprintf(file, "Name: %s\nAge: %d\n", name, age) < 0) {
		printf("Could not write to info.txt.\n");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		printf("Could not finish saving info.txt.\n");
		return 1;
	}

	printf("Your name and age were saved to info.txt.\n");
	return 0;
}
