//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    
    int number, original, digit;
    int product = 1;  
    int hasOddDigit = 0;  
    
    
    
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    original = number;
    
    
    if (number < 0) {
        number = -number;
    }
    
    
    while (number > 0) {
        digit = number % 10;  
        
        
        if (digit % 2 == 1) {
            product = product * digit;  
            hasOddDigit = 1;  
        }
        
        number = number / 10;  
    }
    
    
    printf("\nNumber: %d\n", original);
    
    if (hasOddDigit == 1) {
        printf("Product of odd digits: %d\n", product);
        printf("(Odd digits: 1, 3, 5, 7, 9)\n");
    } else {
        printf("No odd digits found!\n");
    }
    
    return 0;
}
