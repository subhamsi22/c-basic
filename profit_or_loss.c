/*If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/
#include<stdio.h>
void main(){
    int cp,sp;
    printf("enter the cost price of the item");
    scanf("%d",&cp);
    printf("enter the selling price of the item: ");
    scanf("%d",&sp);
    if(cp>sp){
        int a =cp-sp;
        printf("the seller is in loss%d ",a);
    }
    else{
        int b = sp-cp;
        printf("the seller is in profit %d",b);
    }
}