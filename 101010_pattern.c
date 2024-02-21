// write a c code to print the pattern 1010101
#include<stdio.h>
void main(){
    int n;
    for(int i=1;i<=4;i++){
        n =1;
        for(int j=1;j<=4-i;j++){
            printf(" ");
            
        }
        for(int k=1;k<=i;k++){
            printf("%d",n);
            if(n==1){
                n=0;
            }
            else
            {
                n=1;
            }
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",n);
            if(n==1){
                n=1;
            }
            else{
                n=0;
            }
        }
        printf("\n");
    }
}
