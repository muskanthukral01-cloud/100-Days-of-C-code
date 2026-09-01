//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    
    int number, original;
    int i, sum = 0;
    
    
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    original = number;
    
    
    if (number <= 0) {
        printf("\nError: Please enter a positive number!\n");
        return 0;
    }
    
    
    printf("\nDivisors of %d (excluding itself): ", original);
    
    for (i = 1; i < number; i++) {
        
        if (number % i == 0) {
            printf("%d ", i);  
            sum = sum + i;     
        }
    }
    
    printf("\n");
    printf("Sum of divisors: %d\n", sum);
    
    
    if (sum == original) {
        printf("\n✓ %d is a PERFECT number!\n", original);
        printf("  (Sum of divisors equals the number itself)\n");
        printf("\nPerfect numbers: 6, 28, 496, 8128...\n");
    } else {
        printf("\n✗ %d is NOT a perfect number.\n", original);
        printf("  (Sum of divisors %d %d)\n", sum, original);
    }
    
    return 0;
}

