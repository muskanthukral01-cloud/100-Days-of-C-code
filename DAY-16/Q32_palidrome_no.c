//Q32: Write a program to check if a number is a palindrome or not.

#include <stdio.h>

int main() {
    
    int number, temp, remainder, reversed = 0;
    
    

    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    
    temp = number;
    

    while (temp > 0) {
        remainder = temp % 10;          
        reversed = (reversed * 10) + remainder;  
        temp = temp / 10;               
    }
    
    
    printf("\nOriginal number: %d\n", number);
    printf("Reversed number: %d\n", reversed);
    
    if (number == reversed) {
        printf("\n✓ %d is a PALINDROME number!\n", number);
        printf("  (Reads the same forwards and backwards)\n");
    }
    else {
        printf("\n✗ %d is NOT a palindrome number.\n", number);
        printf("  (Original: %d, Reversed: %d)\n", number, reversed);
    }
    
    return 0;
}