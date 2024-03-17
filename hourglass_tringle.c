#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<=2*n-1;i++){
        int a;
        if(i< n){
            a= 2*i+1;
        }
        else{
            a =2*(2*n-i)-3;
        }
        for(int j=0;j<=a;j++){
            printf(" ");
        }
        for(int k=0;k<=2*n-a;k++){
            printf("* ");
        }
        printf("\n");
    }
}
