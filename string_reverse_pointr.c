// write a c code to reverse the sting uing pointer
#include<stdio.h>
#include<string.h>
void main(){
    char n[]={"subham singh"};
    int s = strlen(n)-1;
    
    char *p=n+s;
    
    
    
    while(p>=n){
        printf("%c",*p);
        p--;
    }
}  
