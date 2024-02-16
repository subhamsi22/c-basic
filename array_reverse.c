// write a c code to revers the aray 


#include<stdio.h>
#include<conio.h>
void main(){
    int n[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(n)/sizeof(n[0]);
    for(int i=size-1;i>=0;i--){
        printf("%d",n[i]);
    }
}