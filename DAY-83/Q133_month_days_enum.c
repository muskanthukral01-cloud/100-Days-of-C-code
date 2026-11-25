//Q133: Print the number of days in each month using an enumeration.

#include <stdio.h>

enum Month {
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

int main() {
	const char *monthNames[] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month;

	for (month = JANUARY; month <= DECEMBER; month++) {
		if (month == FEBRUARY) {
			printf("%s: %d days in a non-leap year\n",
					monthNames[month], daysInMonth[month]);
		} else {
			printf("%s: %d days\n", monthNames[month], daysInMonth[month]);
		}
	}

	return 0;
}
