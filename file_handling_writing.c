#include<stdio.h>
#include<string.h>
void main(){
    FILE* n = fopen("subham singh.txt","w");
    char a[]={"subham singh is very smart and handsome boy "};
    fputs(a,n);
    fclose(n);
}