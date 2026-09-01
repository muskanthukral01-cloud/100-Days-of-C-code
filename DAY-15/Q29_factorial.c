//Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main (){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("factorial=%d",fact);
return 0;
}