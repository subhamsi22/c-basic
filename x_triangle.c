#include<stdio.h>
void main(){
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            if(i==j||i+j==n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
}
