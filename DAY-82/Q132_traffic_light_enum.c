//Q132: Print the action for a traffic light using an enumeration.

#include <stdio.h>

enum TrafficLight {
	RED,
	YELLOW,
	GREEN
};

int main() {
	enum TrafficLight light;
	int choice;

	printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
	if (scanf("%d", &choice) != 1 || choice < RED || choice > GREEN) {
		printf("Please enter 0, 1, or 2.\n");
		return 1;
	}

	light = (enum TrafficLight)choice;

	switch (light) {
		case RED:
			printf("Stop\n");
			break;
		case YELLOW:
			printf("Wait\n");
			break;
		case GREEN:
			printf("Go\n");
			break;
	}

	return 0;
}
