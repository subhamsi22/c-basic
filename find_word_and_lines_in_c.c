#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char n[]={"hi this is subham singh \n and i am in vs code and \n iam a very smart and handosme boy in this earth  "};
    int size = strlen(n);
    printf("%d is the total words in this paragraph",size);
    int in = 0;
    for(int i=0;n[i]!='\0';i++){
        if(n[i]=='\n'){
            in++;
        }
    }
    printf(" the line in this paragrapgh is %d",in+1);

}