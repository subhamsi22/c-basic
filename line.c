// this code will help you to find the number of torel word ina pragraph as well as the number of line 
#include<stdio.h>
#include<string.h>
void main(){
    char n[]={"hi this is \n subham sing\n and iam working in vs code "};
    int s = strlen(n);
    printf("\n%d words are in this paragraph",s);
    int in =1;
    for (int  i = 0; i < s; i++)
    {
        if(n[i]=='\n'){
            in++;
        }
    }
    printf("\n%d is the totel number of the line in this pragrph",in);
    
}