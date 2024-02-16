#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("this is the greatest number: %d",a);

    }
    else{
        printf("this is the greatest number %d",b);
    }
    getch();
}