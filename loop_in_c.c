#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=1,s=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        s = s+i;
        i++;
    }
    printf("sum = %d",s);
    getch();
    
}