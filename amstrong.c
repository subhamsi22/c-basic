#include<stdio.h>
void main(){
    int i,n,r,s=0;
    printf("ente the number : ");
    scanf("%d",&n);
   i=n;
    while(n!=0)
    {
        r = n%10;
        s+=r*r*r;
        n/=10;

    }
    if(s==i){
        printf("this is a armastrong number");}
        else{
            printf("this is not a armstroong number ");
    
        }
    }