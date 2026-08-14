//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
float num1,num2;
printf("enter 2 numbers:");
scanf("%f %f",&num1,&num2);
printf("sum=%.2f\n difference= %.2f\n product=%.2f\n quotient=%.2f\n ", num1+num2,num1-num2,num1*num2,num1/num2);


    return 0;
}