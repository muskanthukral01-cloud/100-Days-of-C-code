//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>

int main(){
float temp;
printf("Enter temperature in Celsius: ");
scanf("%f", &temp);
float fahrenheit = (temp * (9.0/5.0) + 32);
printf("Temperature in Fahrenheit: %.2f", fahrenheit);
    return 0;
}


