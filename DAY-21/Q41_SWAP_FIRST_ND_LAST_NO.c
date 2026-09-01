//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    
    int number, original, lastDigit, firstDigit;
    int temp, digitCount = 0;
    int divisor = 1;
    int newNumber;
    

    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    original = number;
    temp = number;
    
    
    while (temp > 0) {
        digitCount++;
        temp = temp / 10;
    }
    
    
    if (digitCount == 1) {
        printf("\nNumber: %d\n", original);
        printf("Single digit - No swap needed!\n");
        return 0;
    }
    
    
    lastDigit = number % 10;
    
    
    for (int i = 1; i < digitCount; i++) {
        divisor = divisor * 10;
    }
    firstDigit = number / divisor;
    
    
    
    temp = number % divisor;  
    temp = temp / 10;         
    newNumber = (lastDigit * divisor) + (temp * 10) + firstDigit;
    
    
    printf("\nOriginal number: %d\n", original);
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("\nNumber after swap: %d\n", newNumber);
    
    return 0;
}
