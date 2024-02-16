// write a c code for read a file 
#include<stdio.h>
void main(){
    FILE* n = fopen("subham information.txt","r");
    char a[100];
    while(fgets(a,100,n)!=NULL){
        printf("%s",a);
        
        
    }
}