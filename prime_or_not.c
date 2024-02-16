#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,c=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
        if(c==2)
        {
            printf("this number is a prime number %d ",n);

        }
        else{
            printf("this number is not a prime number %d ",n);
        }
    
    getch();
}
