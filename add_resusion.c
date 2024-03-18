// write a program to find the sum of 2 numebr using recursion 
#include<stdio.h>
int sum(int a,int b){
    if(b==0){
        return a;
        
    }
    return sum(a+1,b-1);
}
void main(){
    int a;//1
    int b;//2
    int c;
    scanf("%d%d",&a,&b);
    int s= sum(a,b);
    printf("%d",s);
}
