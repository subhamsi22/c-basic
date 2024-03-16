// write a c code by the use of switch statemnt and find the garde of a student 
// if student get above 90 so display a grade 
// if student get 80 then display b grade
#include<stdio.h>
void main(){
    int n;
    printf("enter the numebr: ");
    scanf("%d",&n);
    switch(n){
    case 90 ... 100:
    printf("A");
    break;
    case 80 ... 89:
    printf("B");
    break;
    case 50 ... 79:
    printf("C");
    break;
    case 30 ... 49:
    printf("D");
    break;
    default:
printf("this is not valid format ");
break;
    }
}
