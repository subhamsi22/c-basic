// write a c code to make a sunny number 
#include<stdio.h>
#include<math.h>
void main(){
    int n,i,s;
    printf("enter the number:");
    scanf("%d",&n);
    float k;
    s =n+1;
    k= sqrt(s);
    i =k;
    (i==k)?printf("this is a sunny number"):printf("this is not a sunny number");
}
