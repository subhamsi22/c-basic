// write a c code to find the vovwel in an string 
#include<stdio.h>
#include<string.h>
void main(){
    char n[]={"subham singh"};
    int s = strlen(n);
    for(int i=0;i<s;i++){
        if(n[i]== 'a'||n[i]== 'e'||n[i]== 'i'||n[i]== 'o'||n[i]=='u'){
            printf("%c",n[i]);
        }
    }
}
