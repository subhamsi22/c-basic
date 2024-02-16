// journal accounts c code
#include<stdio.h>
#include<string.h>
void main(){
    typedef struct journel1
    {
        char d[20];
        char p[20];
        char dr[20];
        char c [20];
        //1 entry variables
        char purchased[30];
        char ch[20];
        int a;
        char nar[20];




    }journel1;
    journel1 n[9];
    strcpy(n[0].d,"DATE");
    strcpy(n[0].p,"PARTICULARS");
    strcpy(n[0].dr,"DR");
    strcpy(n[0].c,"CR");

printf("\033[33m%s\t",n[0].d);
printf("%s ",n[0].p);

printf("\t\t\t%s ",n[0].dr);
printf("\t%s\033[0m\n",n[0].c);



// 1 entry 

strcpy(n[1].purchased,"PURCHASED A/C ..... DR");
strcpy(n[1].ch,"TO CHASH A/C");
n[1].a = 20000;
strcpy(n[1].nar,"BEGIN:-goods purchsed");

//2nd entry

strcpy(n[2].purchased,"PURCHASED  A/C ..... DR");
strcpy(n[2].ch,"TO SUBHASH A/C");
n[2].a = 12000;
strcpy(n[2].nar,"BEGIN:-goods purchsed on credit");


//3rd entry 

strcpy(n[3].purchased,"FURNITURE A/C ..... DR");
strcpy(n[3].ch,"TO CASH A/C");
n[3].a = 6000;
strcpy(n[3].nar,"BEGIN:-furniture  purchsed");

//4th entry

strcpy(n[4].purchased,"SUBHASH A/C ..... DR");
strcpy(n[4].ch,"TO CASH A/C");
n[4].a = 8000;
strcpy(n[4].nar,"BEGIN:-paid cash to subhash");

//5th entry 

strcpy(n[5].purchased,"puchased A/C ..... DR");
strcpy(n[5].ch,"TO Cash A/C");
n[5].a = 7500;
strcpy(n[5].nar,"BEGIN:- purchsed from ravi to cash");

//6th entry

strcpy(n[6].purchased,"puchased A/C ..... DR");
strcpy(n[6].ch,"TO RAVI A/C");
n[6].a = 5000;
strcpy(n[6].nar,"BEGIN:- purchsed on credit");

//7th entry

strcpy(n[7].purchased,"MACHINERY  A/C ..... DR");
strcpy(n[7].ch,"TO CASH A/C");
n[7].a = 8000;
strcpy(n[7].nar,"BEGIN:-machine purchsed");

//8th entry 

strcpy(n[8].purchased,"RENT A/C ..... DR");
strcpy(n[8].ch,"TO CASH A/C");
n[8].a = 400;
strcpy(n[8].nar,"BEGIN:-rent paid");

for (int  i = 1; i <=8; i++)
{
    printf("\033[34m\t%s\t\t\033[0m",n[i].purchased);
    printf("\033[35m%d\n\033[0m",n[i].a);
        printf("\033[36m\t%s",n[i].ch);
                printf("\t\t\t\t%d\n\n",n[i].a);


}













  


}