#include<stdio.h>
void main(){
    int i,f,n=1;
    float s =0.0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f =1;
        for(int j=1;j<=i;j++){
            f  =f*j;
            s = s+(float)i/(float)f;
            
        }
        printf("sum = %f",s);
    }
}
