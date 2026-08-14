//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("enter 2 numbers:");
    scanf("%f %f", &num1, &num2);
    printf("%f + %f =%f", num1, num2, num1 + num2);
    return 0;
}
