// write a c code to find the factorial 
#include<stdio.h>
int fact(int n){
    if(n<1){
        return 1;
    }
    return n * fact(n-1);
}
void main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int f = fact(n);
    printf("%d",f);
}
