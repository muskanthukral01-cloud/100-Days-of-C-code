//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main(){
int n;
printf("Enter the value of n(till u want to find sum)");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++){

    sum=sum+i;
}
printf("Sum of first %d natural numbers is %d",n,sum);
    return 0;
}