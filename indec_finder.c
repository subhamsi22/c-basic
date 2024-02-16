#include<stdio.h>
void value(int *n,int size,int x){
    
    for (int i = 0; i < size; i++)
    {
        if(n[i]==x){
            printf("%d number is comes in %dth index",x,i);
            return;
        }
    }
    
}
void main(){
    int n[]={1,2,3,4,5,6,7,8,9};//45
    int size=sizeof(n)/sizeof(n[0]);
    int x;
    printf("enter the number where you find on the index :");
    scanf("%d",&x);
    value(n,size,x);
}