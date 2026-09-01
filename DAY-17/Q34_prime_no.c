//Q34: Write a program to check if a number is a prime number.

#include <stdio.h>

int main() {
    
    int number, i;
    int isPrime = 1;  
    
    printf("=== Prime Number Checker ===");
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    
    if (number <= 1) {
        printf("\n✗ %d is NOT a prime number.\n", number);
        printf("  (Prime numbers must be greater than 1)\n");
        return 0;
    }
    

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;  
            break;  
        }
    }
    
    
    printf("\nNumber: %d\n", number);
    
    if (isPrime == 1) {
        printf("\n✓ %d is a PRIME number!\n", number);
        printf("  (Only divisible by 1 and itself)\n");
    } else {
        printf("\n✗ %d is NOT a prime number.\n", number);
        printf("  (Divisible by numbers other than 1 and itself)\n");
    }
    
    return 0;
}