#include<stdio.h>
#include<string.h>
int main(){
    char n[20];
    printf("enter the word: ");
    fgets(n,sizeof(n),stdin);
n[strcspn(n,"\n")]='\0';
int size = strlen(n);
for (int i = 0; i <=size/2; i++)
{
if(n[i]!=n[size-1-i]){
    printf("%s  this is not a plaindrome",n);
    return 0;
}
}
printf("%s this is a plaindrome",n);

}
