#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char n[20];
    int in;
    in =-1;
    printf("eter the name : ");
    gets(n);
    printf("%c",n[0]);
    
    for(int i=0;i<=strlen(n);i++){
        if(n[i]== ' '){
            in =i;
            break;
        }
    }
    if(in!=-1){
    for(int i = in+1;i<strlen(n);i++){
        printf("%c",n[i]);
    }
    }
}