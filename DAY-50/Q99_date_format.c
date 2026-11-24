//Q99: Change a date from dd/mm/yyyy to dd-Mmm-yyyy.

#include <stdio.h>

int main() {
	const char *months[] = {
		"Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	int day, month, year;

	printf("Enter a date in dd/mm/yyyy format: ");
	if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
		printf("Please enter the date in dd/mm/yyyy format.\n");
		return 1;
	}

	if (month < 1 || month > 12) {
		printf("The month must be from 01 to 12.\n");
		return 1;
	}

	printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);
	return 0;
}
