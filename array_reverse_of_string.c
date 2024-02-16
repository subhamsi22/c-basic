// this code help to reverse the given name 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char n[20];
    printf("enter the name :");
    gets(n);
    for (int  i = strlen(n); i >=0; i--)
    {
        printf("%c",n[i]);
    }
    
}