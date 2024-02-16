#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,s=0;
    printf("enter the umber:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            s = s+i;

        }
        
    }
    if(s==n){
        printf("number is a perfect ");

    }
    else{
        printf("number is not a perfect ");
    }
    
}