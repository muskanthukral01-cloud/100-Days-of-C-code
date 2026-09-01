//Q35: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    
    int number;
    
    
    
    printf("\nEnter a positive number: ");
    scanf("%d", &number);
    
    
    if (number <= 0) {
        printf("\nError: Please enter a positive number!\n");
        return 0;
    }
    
    
    printf("\nFactors of %d are: \n", number);
    
    
    for (int i = 1; i <= number; i++) {
        
        if (number % i == 0) {
            printf("%d ", i);  
        }
    }
    
    printf("\n");
    
    return 0;
}

