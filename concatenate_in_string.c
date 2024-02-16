// write a c code to concatenate (joint the two string ) in c programming
#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    char b[100];
    printf("enter the first name :");
    fgets(a,sizeof(a),stdin);
    printf("enter the 2nd name: ");
    fgets(b,sizeof(b),stdin);
    
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    strcat(a," ");
strcat(a,b);
        printf("%s",a);
}