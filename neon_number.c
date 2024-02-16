#include<stdio.h>
#include<conio.h>
void main(){
    int n,s=0,r,a;
    printf("enter the number: ");
    scanf("%d",&n);
    a = n*n;
    while (a>0)
    {
        r = a%10;
        s = s+r;
        a = a/10;

    }
    if(s==n){
        printf("this number is a neon number  ");

    }
    else{
        printf("this number is not a neon number ");
    }
getch();    

}