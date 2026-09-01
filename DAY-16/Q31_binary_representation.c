//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    
    int number, temp, power;
    
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    if (number == 0) {
        printf("\nBinary representation of 0 is: 0\n");
        return 0;
    }
    
    
    temp = number;
    
    
    power = 1;
    while (power <= number) {
        power = power * 2;
    }
    power = power / 2;
    
    
    printf("\nBinary representation of %d is: ", temp);
    
    
    while (power >= 1) {
        if (number >= power) {
            printf("1");
            number = number - power;
        } else {
            printf("0");
        }
        power = power / 2;
    }
    
    printf("\n");
    
    return 0;
}
