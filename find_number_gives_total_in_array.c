#include<stdio.h>
#include<conio.h>
void main(){
    int n[]={1,2,3,4,5,6,7,8,9};
    int x=12;
    int size=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<=size;i++){
        for(int j=i+1;j<=size;j++){
            if(n[i]+n[j]==x){
                printf("(%d,%d)",n[i],n[j]);
            }
        }
    }
}