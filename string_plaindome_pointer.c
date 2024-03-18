

#include<stdio.h>
#include<string.h>
int main(){
    char n[]={"mom"};
    int s = strlen(n);
    char *p=n+s-1;
    n[strcspn(n,"\n")]='\0';
    for(int i=0;i<=s/2;i++){
        if(n[i]!=*p){
            printf("this is not a plaindrome %s",n);
            return 0;
        }
        p--;
    }
    printf("%s is the plaindrome ",n);
}
