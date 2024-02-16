#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    typedef struct student
    {
        char name[20];
        int age;
        float marks;
    } student;
    student n[2];
    for ( int  i = 0; i < 2; i++)
    {
        printf("enter your name: ");
        fgets(n[i].name,sizeof(n[i].name), stdin);
       printf("enter the age :");
       scanf("%d",&n[i].age);
       printf("enter the marks: ");
       scanf("%f",&n[i].marks);



while (getchar()!='\n');

    }
    for (int j = 0; j < 2; j++)
    {
        printf("the name of 1st studen is:= %s\n",j+1,n[j].name);
        printf("the age if this student is := %d\n",n[j].age);
        printf("the marks of this student is := %f\n",n[j].marks);
    }
    
    
   
}

