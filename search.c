#include<stdio.h>
void value(int *n,int size,int a){
    for (int i = 0; i < size; i++)
    {
        if(a==n[i]){
            printf("this number is come in %dth index",i);
            return;
        }
    }
    
}
void main(){
    int n[]={1,2,3,4,5,6,7,8,9};
   int size = sizeof(n)/sizeof(n[0]);
    int a;//=8
    printf("enter your number: ");
    scanf("%d",&a);
    value(n,size,a);
}