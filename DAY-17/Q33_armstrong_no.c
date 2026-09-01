//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    
    int number, original, temp;
    int digitCount = 0;
    int sum = 0;
    int digit;
    
    
    printf("=== Armstrong Number Checker ===");
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    
    original = number;
    temp = number;
    
    
    while (temp > 0) {
        digitCount++;
        temp = temp / 10;
    }
    
    
    temp = number;
    
    
    while (temp > 0) {
        digit = temp % 10;  
        sum = sum + pow(digit, digitCount);  
        temp = temp / 10;   
    }
    
    
    printf("\nNumber: %d\n", original);
    printf("Number of digits: %d\n", digitCount);
    printf("Sum of digits^%d: %d\n", digitCount, sum);
    
    
    if (sum == original) {
        printf("\n✓ %d is an ARMSTRONG number!\n", original);
    } else {
        printf("\n✗ %d is NOT an Armstrong number.\n", original);
    }
    
    return 0;
}

