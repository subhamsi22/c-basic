#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            
            if(i%2==0){
                printf("%d",j);
            }
            else{
                printf("%c",64+j);
            }
        }
        printf("\n");
    }
}
