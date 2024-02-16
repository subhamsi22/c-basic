// wap to convert dciml to binary 
#include<stdio.h>
void main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a[32];
    int i =0;
    while(n>0){
        a[i]= n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }






}