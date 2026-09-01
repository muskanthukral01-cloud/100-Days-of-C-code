//Q18: Write a program to assign grades based on marks obtained by a student.

#include <stdio.h>

int main() {
    
    float marks;

    printf("\nEnter marks obtained (0-100): ");
    scanf("%f", &marks);
    
    printf("\nGrade: ");
    
    if (marks >= 90) {
        printf("A+ (Excellent!)\n");
    }
    else if (marks >= 80) {
        printf("A (Very Good)\n");
    }
    else if (marks >= 70) {
        printf("B (Good)\n");
    
    }
    else if (marks >= 60) {
        printf("C (Satisfactory)\n");
        
    }
    else if (marks >= 50) {
        printf("D (Passing)\n");
        
    }
    else {
        printf("F (Fail)\n");
        
    }
    
    printf("\nMarks: %.1f/100\n", marks);
    
    return 0;
}