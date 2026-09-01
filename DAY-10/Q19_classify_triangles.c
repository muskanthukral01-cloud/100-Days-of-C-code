//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    
    float side1, side2, side3;

    printf("Enter the three sides of a triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    
    printf("Side 2: ");
    scanf("%f", &side2);
    
    printf("Side 3: ");
    scanf("%f", &side3);
    
    
    if (side1 == side2 && side2 == side3) {
        printf("\nThe triangle is Equilateral \n");
    }

    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("\nThe triangle is Isosceles \n");
    }
    
    else {
        printf("\nThe triangle is Scalene\n");
    }
    
    return 0;
}

