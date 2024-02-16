// write a c code to write a file 
#include<stdio.h>
#include<string.h>
void main(){
    FILE* n = fopen("subham information.txt","w");
    char a[]={"hi this is subham singh working in vs code "};
    fputs(a,n);
    fclose(n);
}