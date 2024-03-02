#include<stdio.h>
void main(){
    int i,s=0,f,q,n,r;
    printf("enter the number : ");
    scanf("%d",&n);
    q =n;
    while(q>0){
        r = q%10;
        f = 1;
        for(i=1;i<=r;i++){
            f =f*i;
        }
        s=s+f;
        q = q/10;
        
    }
    (s==n)?printf("this is a prtation number "):printf("this is not a pratition number ");
}
