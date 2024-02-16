#include<stdio.h>
#include<conio.h>
void main(){
    FILE* n =fopen("subham singh.txt","r");
    char a[100];
    while (fgets(a,100,n)!=NULL)
    {
        printf("%s",a);
    }
    
}