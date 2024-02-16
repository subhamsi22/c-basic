#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,s=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;

    }
    printf("%d",s);
    getch();
}