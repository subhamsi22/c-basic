#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter the two number: ");
    scanf("%d%D",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d",a);
    printf("b =%d",b);
    getch();
}