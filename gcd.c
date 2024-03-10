#include<stdio.h>
void main(){
    int a;
    printf("enter the number  : ");
    scanf("%d",&a);
    int b;
    
    printf("enter the 2nd number :");
    scanf("%d",&b);
    while(b!=0){
        int t=b;
        b=a%b;
        a =t;
    }
    printf("%d",a);
}
