//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    
    int number, original, digit;
    int sum = 0;
    
    
    
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    original = number;
    
    
    if (number < 0) {
        number = -number;  
    }
    
    
    while (number > 0) {
        digit = number % 10;  
        sum = sum + digit;    
        number = number / 10; 
    }
    
    
    printf("\nNumber: %d\n", original);
    printf("Sum of digits: %d\n", sum);
    
    printf("\nExample: If number is 123\n");
    printf("  1 + 2 + 3 = 6\n");
    
    return 0;
}

