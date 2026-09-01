//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store coefficients and discriminant
    float a, b, c;
    float discriminant;
    float root1, root2;
    
    // Get input from user for quadratic equation ax² + bx + c = 0
    printf("=== Quadratic Equation Solver ===");
    printf("\nFor equation: ax² + bx + c = 0\n");
    
    printf("\nEnter coefficient a: ");
    scanf("%f", &a);
    
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);
    
    printf("\nDiscriminant = %.2f\n", discriminant);
    
    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\n✓ Two distinct real roots:\n");
        printf("  Root 1 = %.2f\n", root1);
        printf("  Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("\n✓ One real root (equal roots):\n");
        printf("  Root = %.2f\n", root1);
    }
    else {
        
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("\n✓ Complex roots (not real):\n");
        printf("  Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("  Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    
    return 0;
}
