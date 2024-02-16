#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=1,f=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        f= f*i;
        i++;
    }
    printf("the factriol is = : %d ",f);
    getch();
}