// write a c code to find the prime and amsrstrong number both in one code 
#include<stdio.h>
void prime(int n);
void  ams(int n);
void main(){
    int n;
    printf("enter the number");//407
    scanf("%d",&n);
prime(n);
ams(n);
    

}
void prime(int n){
    if(n%2!=0){
        printf(" %dthis is a odd  numebr\n ",n);
    }
}
void ams(int n){
int i,r,s=0;
i = n;
while (n!=0)
{
    r = n%10;
    s +=r*r*r;
    n/=10;

}
(s==i)? printf("%d this is a armstrong",i):printf("%d is not a aramstrong numebr ",i);
}