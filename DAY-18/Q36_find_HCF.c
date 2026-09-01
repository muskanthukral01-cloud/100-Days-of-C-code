//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    
    int num1, num2, hcf = 1;
    int i;
    
    
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    

    if (num1 == 0 || num2 == 0) {
        printf("\nError: Numbers cannot be zero!\n");
        return 0;
    }
    

    int smaller = (num1 < num2) ? num1 : num2;
    
    
    for (i = smaller; i >= 1; i--) {
        
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  
            break;    
        }
    }
    
    
    printf("\nNumber 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("\nHCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    printf("(HCF = Highest Common Factor)\n");
    
    return 0;
}

