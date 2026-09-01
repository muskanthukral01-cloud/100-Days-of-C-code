//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    
    int num1, num2, lcm;
    int temp1, temp2;
    

    printf("\nEnter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    
    temp1 = num1;
    temp2 = num2;
    
    
    lcm = (num1 > num2) ? num1 : num2;
    
    
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            
            break;
        }
        lcm = lcm + (num1 > num2 ? num1 : num2);
    }
    
    
    printf("\nNumber 1: %d\n", temp1);
    printf("Number 2: %d\n", temp2);
    printf("\nLCM of %d and %d is: %d\n", temp1, temp2, lcm);
    printf("(LCM = Least Common Multiple)\n");
    
    return 0;
}
