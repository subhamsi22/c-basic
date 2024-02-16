#include<stdio.h>
#include<conio.h>
void main(){
    int y;
    printf("enter the number or year: ");
    scanf("%d",&y);
    if(y%400==0){
        printf("this year is a leap year ");

    }
    if(y%100==0){
printf("this year is not a leap year ");

    }
    else
    {
        if(y%4==0){
            printf("this year is a leap year ");

        }
        else{
            printf("this year is not a leap year ");
        }
    }
    getch();
}