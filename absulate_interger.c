//Take integer input and print the absolute value of that integer
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter the number s: ");
    scanf("%d",&n);
    while (n<0)
    {
        n = n*(-1);
    }
    printf("%d",n);
    
}