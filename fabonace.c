#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++){
        c = a+b;
        printf("%d\n",c);
         a=b;
        b=c;
    }
    getch();
}