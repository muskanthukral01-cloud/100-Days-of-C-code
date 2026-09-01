// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,b,swap;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    swap=a;

    a=b;
    b=swap;

    printf("after swapping:\n a= %d\n b=%d",a,b);
    return 0;
}