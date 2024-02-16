#include<stdio.h>
#include<string.h>

int  main(){
    int n;
    char yn[20];

    typedef struct bank
    {
        char a[20];
        int age;
        float bal;
char add[100];
double accno;
double ifci;


    }bank;
    bank j[5];

    printf("\t\t\t\t\t\t\033[34mwelcome to abc bank\033[0m \n\n\n");
    printf("\t\tenter the coustmer id:-");//suppose 123
    scanf("%d",&n);
     getchar();
    if(n==123){
 bank bank;

strcpy(bank.a,"subham singh");
bank.age=21;
bank.bal=2000.67;
strcpy(bank.add,"asansol head brach");
bank.accno=73145322340;
bank.ifci=200573;



// printf the output

printf("\n\n\n\n\t\t\tNAME \t\t\t:\t\t\t%s\n\n",bank.a);
printf("\t\t\tACC/ NUMBER \t\t:\t\t\t %d\n\n",bank.accno);
printf("\t\t\tIFCI code is \t\t:\t\t\t%lf\n\n",bank.ifci);
printf("\t\t\tAGE \t\t\t:\t\t\t%d\n\n",bank.age);
printf("\t\t\tBALANCE\t\t\t:\t\t\t%f\n\n",bank.bal);
printf("\t\t\tADDRESS\t\t\t:\t\t\t %s\n\n\n",bank.add);





printf("DO YOU WANT TO CHECK YOU RECENT TRANSATION(YES/NO)\n\n");
fgets(yn,sizeof(yn),stdin);
yn[strcspn(yn,"\n")]='\0';
if(strcmp(yn,"yes")==0){
    printf("\t\t\t\t\tRECENT TRASATION\n\n\n\n");
 printf("TRASATIONS\t\t\t\t\t\t\t\tDR\t\tCR");

// 1st entry 
j[0].bal = 500;
j[0].accno = 4500;
// 2nd entry 
j[1].bal = 200;
j[1].accno = 4300;
//3rd entry
j[2].bal = 1500;
j[2].accno =2800;
//4th entry 
j[3].bal = 400;
j[3].accno = 2400;
// 5th entry
j[4].bal = 400;
j[4].accno = 2000;

for(int i=0;i<5;i++){
    printf("\n0%d/01/2024\t\t\t\t:\t\t\t%f\n",(i+1),j[i].bal);
        printf("0%d/01/2024\t\t\t\t\t\t\t\t\t\t%f\n",(i+1),j[i].accno);

}






















}


    }
    else{
    printf("your are not our coustmer we are sorry");
    }


return 0;
}