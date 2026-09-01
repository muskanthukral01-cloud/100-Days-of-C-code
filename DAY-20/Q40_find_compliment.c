//Q40: Write a program to find the complement of a number.

#include <stdio.h>

int main() {
    
    int number, complement;
    int digits = 0;
    int temp;
    int maxValue;
    
    
    printf("=== Find Complement of a Number ===");
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    if (number < 0) {
        printf("\nError: Please enter a positive number!\n");
        return 0;
    }
    
    
    temp = number;
    if (number == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }
    }
    
    
    maxValue = 1;
    for (int i = 0; i < digits; i++) {
        maxValue = maxValue * 10;
    }
    maxValue = maxValue - 1;  
    
    
    complement = maxValue - number;
    
    
    printf("\nNumber: %d\n", number);
    printf("Number of digits: %d\n", digits);
    printf("Maximum value with %d digits: %d\n", digits, maxValue);
    printf("\nComplement (9's complement): %d\n", complement);
    printf("(Formula: %d - %d = %d)\n", maxValue, number, complement);
    
    return 0;
}