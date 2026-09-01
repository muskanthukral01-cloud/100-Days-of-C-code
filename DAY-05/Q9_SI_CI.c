//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, SI, CI;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (in percent): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    SI= (principal * rate * time) / 100.0;
    CI = principal * (pow((1 + rate / 100.0), time)) - principal;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}