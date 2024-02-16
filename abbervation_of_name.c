#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char n[20];
printf("enter the name ");
gets(n);
for(int i=0;i<=strlen(n);i++){
    if(i==0|| n[i-1]==' '){
        printf("%c",n[i]);
    }
}
}