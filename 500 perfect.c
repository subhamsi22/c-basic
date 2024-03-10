#include<stdio.h>
void main(){
    for(int i=1;i<=500;i++){
    int s = 0,j;
        for(j=1;j<i;j++){
            if(i%j==0){
                s =s+i;
            }
        }
       if(i==s){
            printf("%d",j);
        }
    }
}
